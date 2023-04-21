#include <iostream>
using namespace std;
int add(int x,int y);
main()
{
	int a,b,c;
	cout<<endl<<"Enter the first value ";
	cin>>a;
	cout<<endl<<"Enter the second value ";
	cin>>b;
	c=add(a,b);
	cout<<endl<<c<<" Addition";
}
int add(int x,int y)
{
	return x+y;
}
