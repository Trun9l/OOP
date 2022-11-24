#pragma once
#include <fstream>
//#include"Ball.h"
//#include "Parallelepiped.h"
using namespace std;
class Shape
{
	float density;
public:
	Shape() { density = -1; };
	~Shape() {};
	float GetDensity();
	static Shape* InShape(ifstream& ifst);
	virtual void InData(ifstream& ifst) = 0; // ввод
	virtual void Out(ofstream& ofst) = 0; // вывод
	virtual void MultiMethod(Shape* other, ofstream& ofst) = 0;
	virtual void MMBall(ofstream& ofst) = 0;
	virtual void MMParal(ofstream& ofst) = 0;
};

