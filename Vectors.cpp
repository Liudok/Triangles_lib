#include "Vector.h"

Vector	vadd(Vector a, Vector b)
{
	return ((Vector){{a.x + b.x, a.y + b.y, a.z + b.z}});
}


Vector cross(Vector a, Vector b)
{
	Vector v;

	v.x = a.y * b.z - a.z * b.y;
	v.y = a.z * b.x - a.x * b.z;
	v.z = a.x * b.y - a.y * b.x;
	return (v);
}

double	dot(Vector a, Vector b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}


Vector	normalize(Vector v)
{
	double len = vlen(v);

	if (len > 0)
	{
		double inv_len = 1.0 / len;
		return (vmul(v, inv_len));
	}
	return (v);
}

double	vlen(Vector v)
{
	return (sqrt(v.x * v.x + v.y * v.y + v.z * v.z));
}

Vector	vmul(Vector a, float b)
{
	return ((Vector){{a.x * b, a.y * b, a.z * b}});
}

