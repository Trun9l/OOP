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
	void MultiMethod(Shape* other, ofstream& ofst);
	void MMBall(ofstream& ofst);
	void MMParal(ofstream& ofst);
};

