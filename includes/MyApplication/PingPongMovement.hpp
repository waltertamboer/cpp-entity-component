/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_MYAPPLICATION_PINGPONGMOVEMENT_HPP
#define CPPENTITYFRAMEWORK_MYAPPLICATION_PINGPONGMOVEMENT_HPP

namespace MyGame
{
	class PingPongMovement : public CppEntityComponent::AbstractComponent
	{
	public:
		PingPongMovement();
		virtual ~PingPongMovement();

		virtual bool acceptsSubsystem(int id) const;

		virtual void update();
		void setTargetA(CppEntityComponent::Transform* transform);
		void setTargetB(CppEntityComponent::Transform* transform);
		void setSpeed(float speed);

	private:
		CppEntityComponent::Transform* m_targetA;
		CppEntityComponent::Transform* m_targetB;
		float m_speed;
	};
}

#endif
