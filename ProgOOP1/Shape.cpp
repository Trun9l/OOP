#include "Shape.h"
#include"Ball.h"
#include "Parallelepiped.h"
#include "Tetrahedron.h"
Shape* Shape::InShape(ifstream& ifst)
{
	Shape* sp;
	int k;
	ifst >> k;
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
	ifst >> sp->density;
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
}
int Shape::GetMeltingPoint()
{
	return meltingPoint;
}