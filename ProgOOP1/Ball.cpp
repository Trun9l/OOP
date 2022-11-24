#include "Ball.h"
//using namespace std;
void Ball::InData(ifstream& ifst)
{
	ifst >> r;
	if (ifst.fail())
	{
		printf_s("Can't read radius\n");
		exit(-1);
	}
	if (r <= 0)
	{
		printf_s("Negative radius\n");
		exit(-1);
	}
}
void Ball::Out(ofstream& ofst)
{
	ofst << "It is Ball: r = " <<r;
}
void Ball::OutBalls(ofstream& ofst)
{
	Out(ofst);
}
bool Ball::CheckBalls()
{
	return true;
}
float Ball::Volume()
{
	float pi = 3.14;
	return (4 / 3) * pi * this->r * this->r;
}