#include<iostream>
#include"标头1.h"
using namespace std;
#define s system("pause")

void all(Person &a,Person &b)
{
	cout<<"ID和年份"<<endl;
	cout<<a.getId()<<"\t"<<a.getBirthDate()->getYear()<<endl;
	cout<<b.getId()<<"\t"<<b.getBirthDate()->getYear()<<endl;
}
bool bijiao(Person &a,Person &b)
{
	if(a.getBirthDate()==b.getBirthDate())
		return true;
	else
	{
		return false;
	}
}
int main()
{
	Person p1(1,1999,1,1);
	Person p2(2,2000,2,2);
	all(p1,p2);
	p1=Person(p2);
	all(p1,p2);
	p2.getBirthDate()->setYear(3000);
	all(p1,p2);
	cout<<"\n"<<"bijiao"<<bijiao(p1,p2)<<endl;
    s;
}