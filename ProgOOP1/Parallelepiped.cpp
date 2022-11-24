#include "Parallelepiped.h"
void Parallelepiped::InData(ifstream& ifst)
{
	ifst >> a >> b >> c;
}
void Parallelepiped::Out(ofstream& ofst)
{
	ofst << "It is Parallelepiped: a = " << a << ", b = " << b << ", c = " << c;
}