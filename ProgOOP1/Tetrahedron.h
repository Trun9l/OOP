#pragma once
#include "Shape.h"
class Tetrahedron : public Shape
{
	int a;
public:
	Tetrahedron() { a = -1; };
	Tetrahedron(int ax) { a = ax; };
	~Tetrahedron() {};
	int GetA() { return a; };
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
	float Volume();
};

