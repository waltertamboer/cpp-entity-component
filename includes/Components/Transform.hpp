/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_COMPONENTS_TRANSFORM_HPP
#define CPPENTITYFRAMEWORK_COMPONENTS_TRANSFORM_HPP

namespace CppEntityComponent
{
	class AbstractComponent;
	class Quaternion;
	class Vector3;

	class Transform : public AbstractComponent
	{
	public:
		Transform();
		virtual ~Transform();

		Vector3 Transform::getPosition() const;
		Quaternion Transform::getRotation() const;
		Vector3 Transform::getScale() const;

		void setPosition(const Vector3& position);
		void setRotation(const Quaternion& rotation);
		void setScale(const Vector3& scale);

	private:
		Vector3 m_position;
		Vector3 m_scale;
		Quaternion m_rotation;
	};
}

#endif
