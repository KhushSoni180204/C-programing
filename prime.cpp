#include <iostream>
using namespace std;
main()
{
	int a,i,c=0;
	cout<<endl<<"Enter a value";
	cin>>a;
	for(i=2;i<=a;i++)
	{
		c=1;
		break;
	}
	if(c=1)
	{
		cout<<endl<<"prime";
	}
	else
	{
		cout<<endl<<"not prime";
	}
}
