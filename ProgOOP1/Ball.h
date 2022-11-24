#pragma once
#include "Shape.h"
class Ball : public Shape
{
	int r;
public:
	Ball() { r = -1; };
	~Ball() {};
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
	float Volume();
};

