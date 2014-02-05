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

namespace CppEntityComponent
{
	Transform::Transform()
		: m_position(Vector3::zero), m_rotation(Quaternion::identity), m_scale(Vector3::one)
	{
	}

	Transform::~Transform()
	{
	}

	Vector3 Transform::getPosition() const
	{
		return m_position;
	}

	void Transform::setPosition(const Vector3& position)
	{
		m_position = position;
	}

	Quaternion Transform::getRotation() const
	{
		return m_rotation;
	}

	void Transform::setRotation(const Quaternion& rotation)
	{
		m_rotation = rotation;
	}

	Vector3 Transform::getScale() const
	{
		return m_scale;
	}

	void Transform::setScale(const Vector3& scale)
	{
		m_scale = scale;
	}
}
