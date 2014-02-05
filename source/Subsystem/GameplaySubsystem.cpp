/**
* This file is part of Walter Tamboer's conceptual entity component framework.
*
* @copyright Walter Tamnboer http://waltertamboer.nl
*/

#include "PrecompiledHeader.hpp"
#include "Components/IComponent.hpp"
#include "Subsystem/SubsystemId.hpp"
#include "Subsystem/ISubsystem.hpp"
#include "Subsystem/AbstractSubsystem.hpp"
#include "Subsystem/GameplaySubsystem.hpp"

namespace CppEntityComponent
{
	GameplaySubsystem::GameplaySubsystem()
		: AbstractSubsystem(SubsystemIdGameplay)
	{
	}

	GameplaySubsystem::~GameplaySubsystem()
	{
	}

	void GameplaySubsystem::update()
	{
		ComponentCollection components = getComponents();
		for (ComponentCollection::iterator it = components.begin(); it != components.end(); ++it)
		{
			(*it)->update();
		}
	}
}
