#include <iostream>
using namespace std;
int add(int x,int y);
main()
{
	int a,b,c;
	cout<<endl<<"Enter the value of a";
	cin>>a;
	cout<<endl<<"Enter the value of b";
	cin>>b;
	c=add(a,b);
	cout<<endl<<c<<"addition";
}
int add(int x,int y)
{
	return x+y
}
