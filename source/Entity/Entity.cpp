/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#include "PrecompiledHeader.hpp"
#include "Components/IComponent.hpp"
#include "Entity/Entity.hpp"

namespace CppEntityComponent
{
	Entity::Entity()
		: m_active(true)
	{
	}
	
	Entity::~Entity()
	{
		for (ComponentCollection::iterator it = m_components.begin(); it != m_components.end(); ++it)
		{
			delete *it;
		}
		m_components.clear();
	}

	bool Entity::isActive() const
	{
		return m_active;
	}

	void Entity::setActive(bool active)
	{
		m_active = active;
	}
	
	void Entity::update()
	{
		if (m_active)
		{
			for (ComponentCollection::iterator it = m_components.begin(); it != m_components.end(); ++it)
			{
				(*it)->update();
			}
		}
	}

	void Entity::addComponent(IComponent* component)
	{
		if (std::find(m_components.begin(), m_components.end(), component) == m_components.end())
		{
			m_components.push_back(component);

			component->bind(this);
		}
	}

	bool Entity::hasComponent(IComponent* component) const
	{
		return std::find(m_components.begin(), m_components.end(), component) != m_components.end();
	}

	void Entity::removeComponent(IComponent* component)
	{
		ComponentCollection::iterator it = std::find(m_components.begin(), m_components.end(), component);
		if (it != m_components.end())
		{
			m_components.erase(it);

			component->unbind();
		}
	}

	Entity::ComponentCollection Entity::getComponents() const
	{
		return m_components;
	}
}
