#include "Tetrahedron.h"
void Tetrahedron::InData(ifstream& ifst)
{
	ifst >> a;
}
void Tetrahedron::Out(ofstream& ofst)
{
	ofst << "It is Tetrahedron: a = " << a;
}