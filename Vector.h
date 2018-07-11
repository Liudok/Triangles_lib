#ifndef VECTOR_H
# define VECTOR_H

#include <iostream>

struct Vector {
	double x;
	double y;
	double z;
};

Vector	normalize(Vector v);
double	dot(Vector a, Vector b);
Vector cross(Vector a, Vector b);
Vector	vadd(Vector a, Vector b);
double	vlen(Vector v);
Vector	vmul(Vector a, float b);

#endif

