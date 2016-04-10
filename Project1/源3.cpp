/*#include<iostream>
#include"БъЭЗ.h"
using namespace std;
#define s system("pause")

double Sum(Circle d[],const int &y)
{
	double sum=0;
	for(int i=0;i<y;i++)
	{
		sum+=d[i].getArea();
	}
	return sum;
}
void Pro(Circle c[],const int &x)
{
	cout<<"Radius"<<"\t\t"<<"Area"<<endl;
	for(int i=0;i<x;i++)
	{
		cout<<c[i].getRadius()<<"\t\t"<<c[i].getArea()<<endl;
	}
	cout<<".........................................."<<endl;
	cout<<"zongmianji="<<Sum(c,x)<<endl;//shu chu  duixiang mianji zhihe
}
int main()
{
	const int size=10;
	Circle anrry[size];
	for(int i=0;i<size;i++)
	{
		anrry[i].setRadius(i+1);
	}
	Pro(anrry,size);//shu chu mei yige duixiang de mianji 
	s;
}*/

