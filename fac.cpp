#include <iostream>
using namespace std;
main()
{
	int a,i,f=1;
	cout<<endl<<"Enter a value";
	cin>>a;
	for(i=a;i>=1;i--)
	{
		f=f*i;
		cout<<i<<" X ";
	}
	cout<<endl<<"FAct = "<<f;
}

