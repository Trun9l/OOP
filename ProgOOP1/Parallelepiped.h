#pragma once
#include "Shape.h"
class Parallelepiped :public Shape
{
	int a, b, c;
public:
	Parallelepiped() { a = -1; b = -1; c = -1; };
	~Parallelepiped() {};
	Parallelepiped(int ax, int bx, int cx) { a = ax; b = bx; c = cx; };
	int GetA() { return a; };
	int GetB() { return b; };
	int GetC() { return c; };
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
	float Volume();
};

