#include "P3D.h"
#include<iostream>
using namespace std;

int P3D::count = 0;

P3D::P3D() : x(0), y(0), z(0)
{
	count++;
}

P3D::P3D(int x, int y, int z) : x(x), y(y), z(z)
{
	count++;
}

P3D::~P3D()
{
	count--;
}

void P3D::Init(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void P3D::Show()
{
	cout << x << "\t" << y << "\t" << z << endl;
}

P3D P3D::Sum(P3D& b)
{
	P3D rez;
	rez.x = x + b.x;
	rez.y = y + b.y;
	rez.z = z + b.z;
	return rez;
}

P3D P3D::Mult(P3D& b)
{
	P3D rez;
	rez.x = x * b.x;
	rez.y = y * b.y;
	rez.z = z * b.z;
	return rez;
}

P3D& P3D::Sum(int x, int y, int z)
{
	this->x += x;
	this->y += y;
	this->z += z;

	return *this;
}

P3D & P3D::Min(int x, int y, int z)
{
	this->x -= x;
	this->y -= y;
	this->z -= z;
	return *this;
}

P3D & P3D::Mult(int x, int y, int z)
{
	this->x *= x;
	this->y *= y;
	this->z *= z;
	return *this;
}

P3D & P3D::Div(int x, int y, int z)
{
	if (x == 0 || y == 0 || z == 0)	return *this;
	this->x /= x;
	this->y /= y;
	this->z /= z;
	return *this;
}

void P3D::GetCount()
{
	cout << "Current number of Point3D objects: " << count << endl;
}