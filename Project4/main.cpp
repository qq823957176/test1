#include <iostream>
using namespace std;
/*class date
{
private:
	int len;
	int a[10];
public:
	date(void *b[10],int len)
	{
		this->a[10]=b[10];
		this->len=len;
	}
};*/
int main()
{
	const int len=10;
	int b[len]={4,2,4,2,5,1,7,5,6,8};
	for(int i=1;i<=len;i++)
	{
		for(int j=len-1;j>=i;j--)
			if(b[j]>b[j-1])
			{
				int p=0;
				p=b[j];
				b[j]=b[j-1];
				b[j-1]=p;
			}
	}
	for(int i=0;i<len;i++)
	{
		cout<<b[i]<<endl;
	}
	system("pause");
	return 0;
}