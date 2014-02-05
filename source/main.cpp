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

using namespace CppEntityComponent;

namespace MyGame
{
	class PingPongMovement : public AbstractComponent
	{
	public:
		PingPongMovement()
			: m_targetA(nullptr), m_targetB(nullptr), m_speed(1.0f)
		{
		}

		virtual ~PingPongMovement()
		{
		}

		virtual bool acceptsSubsystem(int id) const
		{
			return SubsystemIdGameplay == id;
		}

		virtual void update()
		{
			// TODO: This should come out of the gameplay system.
			float time = 1.0f; // The time since the start of the game that the frame started, in seconds. 
	
			float weight = std::cosf(time * m_speed * 2.0f * M_PI) * 0.5F + 0.5F;

			Vector3 position = m_targetA->getPosition() * weight + m_targetB->getPosition() * (1 - weight);

			Transform* transform = getComponent<Transform>();
			transform->setPosition(position);
		}

		void setTargetA(Transform* transform)
		{
			m_targetA = transform;
		}

		void setTargetB(Transform* transform)
		{
			m_targetB = transform;
		}

		void setSpeed(float speed)
		{
			m_speed = speed;
		}

	private:
		Transform* m_targetA;
		Transform* m_targetB;
		float m_speed;
	};

	// An enumeration with all custom subsystem ids, this makes it easier to access.
	enum MySubsystemId
	{
		MySubsystemIdAI = SubsystemIdNetwork
	};

	// A custom subsystem that handles artificial intelligence
	class MyAISubsystem : public AbstractSubsystem
	{
	public:
		MyAISubsystem()
			: AbstractSubsystem(MySubsystemIdAI)
		{
		}

		virtual ~MyAISubsystem()
		{

		}

		virtual void update()
		{

		}
	};

	// A custom application.
	class MyApplication : public CppEntityComponent::Application
	{
	protected:
		virtual void onInitialize()
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
	};
}

int _tmain(int argc, _TCHAR* argv[])
{
	MyGame::MyApplication application;

	return application.run();
}

