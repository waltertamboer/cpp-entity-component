/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#ifndef CPPENTITYFRAMEWORK_MATH_VECTOR3_HPP
#define CPPENTITYFRAMEWORK_MATH_VECTOR3_HPP

namespace CppEntityComponent
{
	class Vector3
	{
	public:
		Vector3();
		~Vector3();

		static Vector3 zero;
		static Vector3 one;

		Vector3& operator *(const Vector3& value);
		Vector3& operator *(float value);

		Vector3& operator +(const Vector3& value);
	};

}

#endif
