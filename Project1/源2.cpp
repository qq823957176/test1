#include<iostream>
#include"БъЭЗ.h"
	using namespace std;
#define s system("pause")

int main()
{
	Circle *p1=new Circle();
		Circle *p2=new Circle(2);
		Circle *p3=new Circle(3);
		cout<<"duixianggeshu"<<"\t"<<"radius"<<endl;
		cout<<Circle::getnumberofobjects()<<"\t\t"<<p1->getRadius()<<endl;
		delete p3;
		cout<<Circle::getnumberofobjects()<<"\t\t"<<p2->getRadius()<<endl;
		s;
}
