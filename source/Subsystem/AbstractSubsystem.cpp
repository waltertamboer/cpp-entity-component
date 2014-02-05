/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#include "PrecompiledHeader.hpp"
#include "Components/IComponent.hpp"
#include "Subsystem/ISubsystem.hpp"
#include "Subsystem/AbstractSubsystem.hpp"

namespace CppEntityComponent
{
	AbstractSubsystem::AbstractSubsystem(int id)
		: m_id(id)
	{
	}

	AbstractSubsystem::~AbstractSubsystem()
	{
	}

	int AbstractSubsystem::getId() const
	{
		return m_id;
	}

	void AbstractSubsystem::addComponent(IComponent* component)
	{
		m_components.push_back(component);
	}

	void AbstractSubsystem::removeComponent(IComponent* component)
	{
		ComponentCollection::iterator it = std::find(m_components.begin(), m_components.end(), component);
		if (it != m_components.end())
		{
			m_components.erase(it);
		}
	}

	AbstractSubsystem::ComponentCollection AbstractSubsystem::getComponents() const
	{
		return m_components;
	}
}
