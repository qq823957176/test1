#include <iostream>
using namespace std;
class date
{
private:
	int a[10];
	int start;
	int over;
public:
	date()
	{};
	void SetDate(int b[],int n,int m)
	{
		start=n;
		over=m;
		for(int i=n;i<=m;i++)
		{
			a[i]=b[i];
		}
	}
	void Fdate()
	{
		for(int i=start;i<=over;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	int quick_sort_a(int n,int m)//ÍÚ¿Ó
	{
		int x=a[n];
		while(n<m)
		{
			while(n<m&&a[m]>x)
				m--;
			if(n<m)
			{
				a[n]=a[m];
				n++;
			}
			while(n<m&&a[n]<=x)
				n++;
			if(n<m)
			{
				a[m]=a[n];
				m--;
			}
		}
		a[n]=x;
		return n;	
	}
	int GetStart()
	{
		return start;
	}
	int GetOver()
	{
		return over;
	}
	void quick_sort_all(int n,int m)//·ÖÖÎ
	{
		int i;
		if(n<m)
		{
			i=quick_sort_a(n,m);
			quick_sort_all(n,i-1);
			quick_sort_all(i+1,m);
		}
	}
};

int main()
{
	int a[10]={4,2,3,8,6,1,9,14,67,23};
	date b;
	b.SetDate(a,0,9);
	b.Fdate();
	b.quick_sort_all(b.GetStart(),b.GetOver());
	b.Fdate();
	system("pause");
	return 0;
}