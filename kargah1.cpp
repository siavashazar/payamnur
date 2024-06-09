#include<iostream>
using namespace std;
main()
{
	int number;
int counter = 0;
cout<<"enter number to progress it for prime:";
cin>>number;
for(int i=2; i <= number/2 ; i++)
{
      if(!(number%i))
      counter++;
}
if (!counter)
     cout<<"\nnumber "<<number<<" is "<<"prime";
 else
      cout<<"\nnumber "<<number<<" is Not "<<"prime";


return 0;
	
	
	
	
	
	
}
