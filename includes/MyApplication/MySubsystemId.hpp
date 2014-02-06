/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_MYAPPLICATION_MYSUBSYSTEMID_HPP
#define CPPENTITYFRAMEWORK_MYAPPLICATION_MYSUBSYSTEMID_HPP

namespace MyGame
{
	// An enumeration with all custom subsystem ids, this makes it easier to access.
	enum MySubsystemId
	{
		MySubsystemIdAI = CppEntityComponent::SubsystemIdNetwork
	};
}

#endif
