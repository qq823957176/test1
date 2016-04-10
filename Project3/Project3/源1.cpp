#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	vector<int>p1;
	for (int i=0;i<10;i++)
	{
		p1.push_back(i+1);
	}
	for (int i=0;i<p1.size();i++)
	{
		cout<<p1[i]<<" "<<endl;
	}

vector<string>p2;
p2.push_back("guo jing");
	p2.push_back("yang guo");
	p2.push_back("zhang wuji");
	p2.push_back("duan yu");
	
	for (int i=0;i<p2.size();i++)
	{
		cout<<p2[i]<<" "<<endl;
	}
	p2.pop_back();

	vector<string>v2;
	v2.swap(p2);
	v2[0]="wei xiaobao";
		for (int i=0;i<v2.size();i++)
		{
			cout<<v2.at(i)<<" "<<endl;
		}
system("pause");
}