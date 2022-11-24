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