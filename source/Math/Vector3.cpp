/**
 * This file is part of Walter Tamboer's conceptual entity component framework.
 *
 * @copyright Walter Tamnboer http://waltertamboer.nl
 */

#include "PrecompiledHeader.hpp"
#include "Math/Vector3.hpp"

namespace CppEntityComponent
{
	Vector3::Vector3()
	{
	}

	Vector3::~Vector3()
	{
	}

	Vector3& Vector3::operator *(const Vector3& value)
	{
		return *this;
	}

	Vector3& Vector3::operator *(float value)
	{
		return *this;
	}

	Vector3& Vector3::operator +(const Vector3& value)
	{
		return *this;
	}

	Vector3 Vector3::zero = Vector3();
	Vector3 Vector3::one = Vector3();
}
