#include <iostream>
using namespace std;
int main()
{
	int a[10],bmax=0,smax=0,bmin=0,smin=0;
for (int i = 0; i < 10; i++)
{
	cin>>a[i];
}
bmax=a[0];
bmin=a[0];
for (int i = 0; i < 10; i++)
{
	if (a[i]>bmax)
	{
		bmax=a[i];
		smax=i;
	}
	if (a[i]<bmin)
	{
		bmin=a[i];
		smin=i;
	}
}
cout<<bmax<<smax<<bmin<<smin;

	return 0;
}
