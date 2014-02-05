/**
* This file is part of Walter Tamboer's conceptual entity component framework.
*
* @copyright Walter Tamnboer http://waltertamboer.nl
*/

#include "PrecompiledHeader.hpp"
#include "Math/Quaternion.hpp"
#include "Math/Vector3.hpp"
#include "Components/IComponent.hpp"
#include "Components/AbstractComponent.hpp"
#include "Components/Transform.hpp"
#include "Entity/Entity.hpp"
#include "Entity/EntityFactory.hpp"

namespace CppEntityComponent
{
	EntityFactory::EntityFactory()
	{
	}

	EntityFactory::~EntityFactory()
	{
	}
	
	Entity* EntityFactory::create() const
	{
		return create(Vector3::zero, Quaternion::identity, Vector3::one);
	}

	Entity* EntityFactory::create(const Vector3& position) const
	{
		return create(position, Quaternion::identity, Vector3::one);
	}

	Entity* EntityFactory::create(const Vector3& position, const Quaternion& rotation, const Vector3& scale) const
	{
		Entity* entity = new Entity();

		Transform* component = new Transform();
		component->setPosition(position);
		component->setRotation(rotation);
		component->setScale(scale);
		entity->addComponent(component);

		return entity;
	}
}
