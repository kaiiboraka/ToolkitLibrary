#pragma once
#include "Toolkit.h"

namespace Toolkit
{
	struct TOOLKIT_API Vector3
	{
		double x, y, z;

		Vector3(double _x = 0, double _y = 0, double _z = 0) : x(_x), y(_y), z(_z)
		{}

	#pragma region Direction Properties

		static Vector3 back();

		static Vector3 forward();

		static Vector3 left();

		static Vector3 right();

		static Vector3 up();

		static Vector3 down();

		static Vector3 one();

		static Vector3 zero();

	#pragma endregion

	#pragma region Operator Overloads

		Vector3 operator+(const Vector3& v) const;

		void operator+=(const Vector3& v);

		Vector3 operator-(const Vector3& v) const;

		void operator-=(const Vector3& v);

		Vector3 operator*(const int& i) const;

		Vector3 operator*(const double& f) const;

		Vector3 operator*(const float& f) const;

		Vector3 operator*(const Vector3& v) const;

		void operator*=(const Vector3& v);

		Vector3 operator/(const Vector3& v) const;

		void operator/=(const Vector3& v);

		Vector3 operator=(const Vector3& v);

		bool operator==(const Vector3& v) const;

		bool operator!=(const Vector3& v) const;

	#pragma endregion
	};
}