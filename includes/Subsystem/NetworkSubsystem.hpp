/**
* This file is part of Walter Tamboer's conceptual entity component framework.
*
* @copyright Walter Tamnboer http://waltertamboer.nl
*/

#ifndef CPPENTITYFRAMEWORK_SUBSYSTEM_NETWORKSUBSYSTEM_HPP
#define CPPENTITYFRAMEWORK_SUBSYSTEM_NETWORKSUBSYSTEM_HPP

namespace CppEntityComponent
{
	class AbstractSubsystem;

	class NetworkSubsystem : public AbstractSubsystem
	{
	public:
		NetworkSubsystem();
		virtual ~NetworkSubsystem();
		virtual void update();
	};
}

#endif
