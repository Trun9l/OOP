#include "Parallelepiped.h"
void Parallelepiped::InData(ifstream& ifst)
{
	ifst >> a;
	if (ifst.fail())
	{
		printf_s("Can't read a side of parallelepiped\n");
		exit(-1);
	}
	if (a <= 0)
	{
		printf_s("Negative a side of parallelepiped\n");
		exit(-1);
	}
	ifst >> b;
	if (ifst.fail())
	{
		printf_s("Can't read b side of parallelepiped\n");
		exit(-1);
	}
	if (b <= 0)
	{
		printf_s("Negative b side of parallelepiped\n");
		exit(-1);
	}
	ifst >> c;
	if (ifst.fail())
	{
		printf_s("Can't read c side of parallelepiped\n");
		exit(-1);
	}
	if (c <= 0)
	{
		printf_s("Negative c side of parallelepiped\n");
		exit(-1);
	}
}
void Parallelepiped::Out(ofstream& ofst)
{
	ofst << "It is Parallelepiped: a = " << a << ", b = " << b << ", c = " << c;
}
float Parallelepiped::Volume()
{
	return this->a * this->b * this->c;
}