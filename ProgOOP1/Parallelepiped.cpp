#include "Parallelepiped.h"
void Parallelepiped::InData(ifstream& ifst)
{
	ifst >> a >> b >> c;
}
void Parallelepiped::Out(ofstream& ofst)
{
	ofst << "It is Parallelepiped: a = " << a << ", b = " << b << ", c = " << c;
}
void Parallelepiped::MultiMethod(Shape* other, ofstream& ofst)
{
	other->MMParal(ofst);
}
void Parallelepiped::MMBall(ofstream& ofst)
{
	ofst << "One ball and one parallelepiped" << endl;
}
void Parallelepiped::MMParal(ofstream& ofst)
{
	ofst << "We have two parallelepipeds" << endl;
}