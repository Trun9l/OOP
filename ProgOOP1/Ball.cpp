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
void Ball::MultiMethod(Shape* other, ofstream& ofst)
{
	other->MMBall(ofst);
}
void Ball::MMBall(ofstream& ofst)
{
	ofst << "Two balls" << endl;
}
void Ball::MMParal(ofstream& ofst)
{
	ofst << "First is a parallelepiped, second is a ball" << endl;
}