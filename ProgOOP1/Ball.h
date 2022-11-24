#pragma once
#include "Shape.h"
class Ball : public Shape
{
	int r;
public:
	Ball() { r = -1; };
	Ball(int rad) { r = rad; };
	~Ball() {};
	void InData(ifstream& ifst);
	void Out(ofstream& ofst);
	void OutBalls(ofstream& ofst);
	bool CheckBalls();
	float Volume();
	int GetR() { return r; };
};

