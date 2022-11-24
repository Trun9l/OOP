#include "Shape.h"
#include"Ball.h"
#include "Parallelepiped.h"
#include "Tetrahedron.h"
Shape* Shape::InShape(ifstream& ifst)
{
	Shape* sp;
	int k;
	ifst >> k;
	if (ifst.fail())
	{
		printf_s("Can't read key\n");
		exit(-1);
	}
	if (k > 3 || k < 1)
	{
		printf_s("Key is out of range\n");
		exit(-1);
	}
	switch (k) {
	case 1:
		sp = new Ball;
		break;
	case 2:
		sp = new Parallelepiped;
		break;
	case 3:
		sp = new Tetrahedron;
		break;
	default:
		return 0;
	}
	ifst >> sp->meltingPoint;
	if (ifst.fail())
	{
		printf_s("Can't read melting point\n");
		exit(-1);
	}
	if (sp->meltingPoint <= 0)
	{
		printf_s("Negative melting point\n");
		exit(-1);
	}
	ifst >> sp->density;
	if (ifst.fail())
	{
		printf_s("Can't read density\n");
		exit(-1);
	}
	if (sp->density <= 0)
	{
		printf_s("Negative density\n");
		exit(-1);
	}
	sp->InData(ifst);
	return sp;
}
float Shape::GetDensity()
{
	return density;
}
bool Shape::Compare(Shape* second)
{
	return this->Volume() < second->Volume();
}

int Shape::GetMeltingPoint()
{
	return meltingPoint;
}