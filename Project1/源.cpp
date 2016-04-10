#include "БъЭЗ.h"
int Circle::numberofobjects=0;

Circle::Circle()
{
	radius_=1;
	numberofobjects++;
}
Circle::Circle(const double &radius_)
{
	this->radius_=radius_;
	numberofobjects++;
}
Circle::~Circle()
{
	numberofobjects--;
}
double Circle::getArea()
{
	return radius_*radius_*3.14;
}
double Circle::getRadius()
{
	return radius_;
}
void Circle::setRadius(const double &y)
{
	if (y>0)
	{
		radius_=y;
	}
	else
	{
		radius_=0;
	}
}
int Circle::getnumberofobjects()
{
	return numberofobjects;
}