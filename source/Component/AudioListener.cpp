/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#include "PrecompiledHeader.hpp"
#include "Components/IComponent.hpp"
#include "Components/AbstractComponent.hpp"
#include "Components/AudioListener.hpp"
#include "Subsystem/SubsystemId.hpp"

namespace CppEntityComponent
{
	AudioListener::AudioListener()
	{
	}

	AudioListener::~AudioListener()
	{
	}

	bool AudioListener::acceptsSubsystem(int id) const
	{
		return id == SubsystemIdNetwork;
	}
}
