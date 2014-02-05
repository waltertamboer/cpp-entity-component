/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#include "PrecompiledHeader.hpp"
#include "Components/IComponent.hpp"
#include "Components/AbstractComponent.hpp"
#include "Entity/Entity.hpp"

namespace CppEntityComponent
{
	AbstractComponent::AbstractComponent()
		: m_entity(nullptr)
	{
	}

	AbstractComponent::~AbstractComponent()
	{
	}

	bool AbstractComponent::acceptsSubsystem(int id) const
	{
		return false;
	}

	void AbstractComponent::bind(Entity* entity)
	{
		if (m_entity != entity)
		{
			unbind();

			m_entity = entity;
			m_entity->addComponent(this);
		}
	}

	void AbstractComponent::unbind()
	{
		if (m_entity != nullptr)
		{
			m_entity->removeComponent(this);
			m_entity = nullptr;
		}
	}

	void AbstractComponent::update()
	{

	}
}
