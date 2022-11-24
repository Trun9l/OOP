#include "Ball.h"
//using namespace std;
void Ball::InData(ifstream& ifst)
{
	ifst >> r;
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