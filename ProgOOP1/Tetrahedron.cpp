#include "Tetrahedron.h"
#include <cmath>
void Tetrahedron::InData(ifstream& ifst)
{
	ifst >> a;
	if (ifst.fail())
	{
		printf_s("Can't read a side of tetrahedron\n");
		exit(-1);
	}
	if (a <= 0)
	{
		printf_s("Negative a side of tetrahedron\n");
		exit(-1);
	}
}
void Tetrahedron::Out(ofstream& ofst)
{
	ofst << "It is Tetrahedron: a = " << a;
}
float Tetrahedron::Volume()
{
	return (a * a * a) * (sqrt(2) / 12);
}