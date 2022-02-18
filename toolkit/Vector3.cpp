//
// Created by Alix on 2/17/2022.
//
#include "pch.h"

#include "Vector3.h"

using namespace Toolkit;

Vector3 Vector3::back()
{
	return Vector3(0, 0, -1);
}

Vector3 Vector3::forward()
{
	return Vector3(0, 0, 1);
}

Vector3 Vector3::left()
{
	return Vector3(-1, 0, 0);
}

Vector3 Vector3::right()
{
	return Vector3(1, 0, 0);
}

Vector3 Vector3::up()
{
	return Vector3(0, 1, 0);
}

Vector3 Vector3::down()
{
	return Vector3(0, -1, 0);
}

Vector3 Vector3::one()
{
	return Vector3(1, 1, 1);
}

Vector3 Vector3::zero()
{
	return Vector3(0, 0, 0);
}

Vector3 Vector3::operator+(const Vector3 &v) const
{
	Vector3 vector3;
	vector3.x = this->x + v.x;
	vector3.y = this->y + v.y;
	vector3.z = this->z + v.z;
	return vector3;
}

void Vector3::operator+=(const Vector3 &v)
{
	this->x += v.x;
	this->y += v.y;
	this->z += v.z;
}

Vector3 Vector3::operator-(const Vector3 &v) const
{
	Vector3 vector3;
	vector3.x = this->x - v.x;
	vector3.y = this->y - v.y;
	vector3.z = this->z - v.z;
	return vector3;
}

void Vector3::operator-=(const Vector3 &v)
{
	this->x -= v.x;
	this->y -= v.y;
	this->z -= v.z;
}

Vector3 Vector3::operator*(const int &i) const
{
	Vector3 vector3;
	vector3.x = this->x * i;
	vector3.y = this->y * i;
	vector3.z = this->z * i;
	return vector3;
}

Vector3 Vector3::operator*(const double &f) const
{
	Vector3 vector3;
	vector3.x = this->x * f;
	vector3.y = this->y * f;
	vector3.z = this->z * f;
	return vector3;
}

Vector3 Vector3::operator*(const float &f) const
{
	Vector3 vector3;
	vector3.x = this->x * f;
	vector3.y = this->y * f;
	vector3.z = this->z * f;
	return vector3;
}

Vector3 Vector3::operator*(const Vector3 &v) const
{
	Vector3 vector3;
	vector3.x = this->x * v.x;
	vector3.y = this->y * v.y;
	vector3.z = this->z * v.z;
	return vector3;
}

void Vector3::operator*=(const Vector3 &v)
{
	this->x *= v.x;
	this->y *= v.y;
	this->z *= v.z;
}

Vector3 Vector3::operator/(const Vector3 &v) const
{
	Vector3 vector3;
	vector3.x = this->x / v.x;
	vector3.y = this->y / v.y;
	vector3.z = this->z / v.z;
	return vector3;
}

void Vector3::operator/=(const Vector3 &v)
{
	this->x /= v.x;
	this->y /= v.y;
	this->z /= v.z;
}

Vector3 Vector3::operator=(const Vector3 &v)
{
	Vector3 vector3;
	vector3.x = v.x;
	vector3.y = v.y;
	vector3.z = v.z;
	return vector3;
}

bool Vector3::operator==(const Vector3 &v) const
{
	return (this->x == v.x && this->y == v.y && this->z == v.z);
}

bool Vector3::operator!=(const Vector3 &v) const
{
	return (this->x != v.x || this->y != v.y || this->z != v.z);
}
