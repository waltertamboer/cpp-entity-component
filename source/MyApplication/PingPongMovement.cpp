/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#include "PrecompiledHeader.hpp"
#include "Math/Quaternion.hpp"
#include "Math/Vector3.hpp"
#include "Subsystem/SubsystemId.hpp"
#include "Components/IComponent.hpp"
#include "Components/AbstractComponent.hpp"
#include "Components/Transform.hpp"
#include "Entity/Entity.hpp"
#include "MyApplication/PingPongMovement.hpp"

namespace MyGame
{
	using namespace CppEntityComponent;

	PingPongMovement::PingPongMovement()
		: m_targetA(nullptr), m_targetB(nullptr), m_speed(1.0f)
	{
	}

	PingPongMovement::~PingPongMovement()
	{
	}

	bool PingPongMovement::acceptsSubsystem(int id) const
	{
		return SubsystemIdGameplay == id;
	}

	void PingPongMovement::update()
	{
		// TODO: This should come out of the gameplay system.
		float time = 1.0f; // The time since the start of the game that the frame started, in seconds. 

		float weight = std::cosf(time * m_speed * 2.0f * (float)M_PI) * 0.5f + 0.5f;

		Vector3 position = m_targetA->getPosition() * weight + m_targetB->getPosition() * (1 - weight);

		Transform* transform = getComponent<Transform>();
		transform->setPosition(position);
	}

	void PingPongMovement::setTargetA(Transform* transform)
	{
		m_targetA = transform;
	}

	void PingPongMovement::setTargetB(Transform* transform)
	{
		m_targetB = transform;
	}

	void PingPongMovement::setSpeed(float speed)
	{
		m_speed = speed;
	}
}
