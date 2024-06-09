#include<iostream>
using namespace std;
int main()
{
int a[100],i,j,sw=1,t;
for( i=0; i<100; i++)
   cin>> a[i];
for( i=0; i<99 && sw ;i++)
{
   sw=0;
   for( j=0; j<(99-i); j++)
   {
      if( a[j] > a[j+1])
      {
         t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;
         sw=1;
	  }   
   }
}
}
