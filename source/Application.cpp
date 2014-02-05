/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#include "PrecompiledHeader.hpp"
#include "Components/IComponent.hpp"
#include "Application.hpp"

#include "Entity/Entity.hpp"

#include "Subsystem/ISubsystem.hpp"
#include "Subsystem/AbstractSubsystem.hpp"
#include "Subsystem/AudioSubsystem.hpp"
#include "Subsystem/GameplaySubsystem.hpp"
#include "Subsystem/GraphicsSubsystem.hpp"
#include "Subsystem/NetworkSubsystem.hpp"

namespace CppEntityComponent
{
	Application::Application()
	{
	}

	Application::~Application()
	{
		for (SubsystemCollection::iterator it = subsystems.begin(); it != subsystems.end(); ++it)
		{
			delete *it;
		}
		subsystems.clear();
	}
	
	void Application::registerSubsystem(ISubsystem* subsystem)
	{
		if (std::find(subsystems.begin(), subsystems.end(), subsystem) != subsystems.end())
		{
			throw "The subsystem is already added.";
		}

		subsystems.push_back(subsystem);
	}

	void Application::unregisterSubsystem(ISubsystem* subsystem)
	{
		SubsystemCollection::iterator it = std::find(subsystems.begin(), subsystems.end(), subsystem);
		if (it != subsystems.end())
		{
			subsystems.erase(it);
		}
	}

	int Application::run()
	{
		addAudioSubsystem();
		addGameplaySubsystem();
		addGraphicsSubsystem();
		addNetworkSubsystem();

		onInitialize();

		// Update once and quit :)

		for (SubsystemCollection::iterator it = subsystems.begin(); it != subsystems.end(); ++it)
		{
			(*it)->update();
		}

		onTerminate();

		return 0;
	}

	void Application::addEntity(Entity* entity)
	{
		Entity::ComponentCollection components = entity->getComponents();
		
		for (Entity::ComponentCollection::iterator it = components.begin(); it != components.end(); ++it)
		{
			addComponent(*it);
		}
	}

	void Application::addComponent(IComponent* component)
	{
		for (SubsystemCollection::iterator it = subsystems.begin(); it != subsystems.end(); ++it)
		{
			ISubsystem* subsystem = *it;

			if (component->acceptsSubsystem(subsystem->getId()))
			{
				subsystem->addComponent(component);
			}
		}
	}

	void Application::onInitialize()
	{
	}

	void Application::onTerminate()
	{
	}

	void Application::addAudioSubsystem()
	{
		AudioSubsystem* subsystem = new AudioSubsystem();
		registerSubsystem(subsystem);
	}

	void Application::addGameplaySubsystem()
	{
		GameplaySubsystem* subsystem = new GameplaySubsystem();
		registerSubsystem(subsystem);
	}

	void Application::addGraphicsSubsystem()
	{
		GraphicsSubsystem* subsystem = new GraphicsSubsystem();
		registerSubsystem(subsystem);
	}

	void Application::addNetworkSubsystem()
	{
		NetworkSubsystem* subsystem = new NetworkSubsystem();
		registerSubsystem(subsystem);
	}
}
