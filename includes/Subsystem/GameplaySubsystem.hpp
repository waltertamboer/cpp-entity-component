/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_SUBSYSTEM_GAMEPLAYSUBSYSTEM_HPP
#define CPPENTITYFRAMEWORK_SUBSYSTEM_GAMEPLAYSUBSYSTEM_HPP

namespace CppEntityComponent
{
	class AbstractSubsystem;

	class GameplaySubsystem : public AbstractSubsystem
	{
	public:
		GameplaySubsystem();
		virtual ~GameplaySubsystem();
		virtual void update();
	};
}

#endif
