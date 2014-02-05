/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_ENTITY_ENTITYFACTORY_HPP
#define CPPENTITYFRAMEWORK_ENTITY_ENTITYFACTORY_HPP

namespace CppEntityComponent
{
	class Entity;
	class Quaternion;
	class Vector3;

	class EntityFactory
	{
	public:
		EntityFactory();
		~EntityFactory();

		Entity* create() const;
		Entity* create(const Vector3& position) const;
		Entity* create(const Vector3& position, const Quaternion& rotation, const Vector3& scale) const;
	};
}

#endif
