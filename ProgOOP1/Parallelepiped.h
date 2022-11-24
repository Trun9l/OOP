#pragma once
#include "Shape.h"
class Parallelepiped :public Shape
{
	int a, b, c;
public:
	Parallelepiped() { a = -1; b = -1; c = -1; };
	~Parallelepiped() {};
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
	void MultiMethod(Shape* other, ofstream& ofst);
	void MMBall(ofstream& ofst);
	void MMParal(ofstream& ofst);
};

