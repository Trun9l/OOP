#pragma once
#include "Shape.h"
class Tetrahedron : public Shape
{
	int a;
public:
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
};

