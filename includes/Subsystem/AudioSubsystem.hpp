/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_SUBSYSTEM_AUDIOSUBSYSTEM_HPP
#define CPPENTITYFRAMEWORK_SUBSYSTEM_AUDIOSUBSYSTEM_HPP

namespace CppEntityComponent
{
	class AbstractSubsystem;

	class AudioSubsystem : public AbstractSubsystem
	{
	public:
		AudioSubsystem();
		virtual ~AudioSubsystem();
		virtual void update();
	};
}

#endif
