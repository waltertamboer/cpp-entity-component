/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_MYAPPLICATION_MYAISUBSYSTEM_HPP
#define CPPENTITYFRAMEWORK_MYAPPLICATION_MYAISUBSYSTEM_HPP

namespace MyGame
{
	// A custom subsystem that handles artificial intelligence
	class MyAISubsystem : public CppEntityComponent::AbstractSubsystem
	{
	public:
		MyAISubsystem();

		virtual ~MyAISubsystem();

		virtual void update();
	};
}

#endif
