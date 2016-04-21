#include <iostream>
using namespace std;

void StackOne(int a[],int i,int n)//从i开始，n为总数节点
{
	int temp=a[i];
	int j=2*i+1;//本段代码讲述的是一个的数据a[i]下沉的过程。
	while(j<n)
	{
		if(j+1<n&&a[j]>a[j+1])
			j++;
		if(a[j]>=temp)
			break;
		a[i]=a[j];
		i=j;
		j=2*i+1;
	}
	a[i]=temp;
}
void StackTwo(int a[],int n)//最小堆的建立
{
	for(int i=n/2-1;i>=0;i--)
	{
		StackOne(a,i,n);
	}
}
void Swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
void StackThree(int a[],int n)//最小堆的排序
{
	for(int i=n-1;i>=1;i--)
	{
		Swap(a[0],a[i]);
		StackTwo(a,i);
	}
}
void Fdate(int a[])
{
	for(int i=0;i<=9;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int a[10]={2,4,5,7,9,3,6,43,21,10};
	Fdate(a);
	StackThree(a,10);
	Fdate(a);
	system("pause");
}