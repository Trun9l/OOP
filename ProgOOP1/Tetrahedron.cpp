#include "Tetrahedron.h"
#include <cmath>
void Tetrahedron::InData(ifstream& ifst)
{
	ifst >> a;
}
void Tetrahedron::Out(ofstream& ofst)
{
	ofst << "It is Tetrahedron: a = " << a;
}
float Tetrahedron::Volume()
{
	return (a * a * a) * (sqrt(2) / 12);
}