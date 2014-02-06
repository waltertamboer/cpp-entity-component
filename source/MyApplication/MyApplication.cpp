/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#include "PrecompiledHeader.hpp"

#include "Math/Quaternion.hpp"
#include "Math/Vector3.hpp"
#include "Entity/Entity.hpp"
#include "Entity/EntityFactory.hpp"
#include "Components/IComponent.hpp"
#include "Components/AbstractComponent.hpp"
#include "Components/AudioListener.hpp"
#include "Components/AudioSource.hpp"
#include "Components/Transform.hpp"
#include "Subsystem/SubsystemId.hpp"
#include "Subsystem/ISubsystem.hpp"
#include "Subsystem/AbstractSubsystem.hpp"
#include "Application.hpp"

#include "MyApplication/MyAISubsystem.hpp"
#include "MyApplication/PingPongMovement.hpp"
#include "MyApplication/MyApplication.hpp"

namespace MyGame
{
	using namespace CppEntityComponent;

	void MyApplication::onInitialize()
	{
		registerSubsystem(new MyAISubsystem());

		EntityFactory ef;
		Entity* entity = nullptr;

		// Create an entity with an audio listener that moves around:
		entity = ef.create();
		entity->addComponent(new AudioListener());
		entity->addComponent(new PingPongMovement());
		addEntity(entity);

		// Create an entity with an audio source:
		AudioSource* audioSource = new AudioSource();
		entity = ef.create();
		entity->addComponent(audioSource);
		addEntity(entity);
	}
}
