/**
* This file is part of Walter Tamboer's conceptual entity component framework.
*
* @copyright Walter Tamnboer http://waltertamboer.nl
*/

#include "PrecompiledHeader.hpp"
#include "Subsystem/SubsystemId.hpp"
#include "Subsystem/ISubsystem.hpp"
#include "Subsystem/AbstractSubsystem.hpp"
#include "Subsystem/NetworkSubsystem.hpp"

namespace CppEntityComponent
{
	NetworkSubsystem::NetworkSubsystem()
		: AbstractSubsystem(SubsystemIdNetwork)
	{
	}

	NetworkSubsystem::~NetworkSubsystem()
	{
	}

	void NetworkSubsystem::update()
	{
	}
}
