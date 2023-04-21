#include<iostream>
using namespace std;
void mult(int a,int b)
{
	cout<<endl<<a*b;
}
void mult(int a,int b,int c)
{
	cout<<endl<<a*b*c;
}
void mult(int a,int b,int c,int d)
{
	cout<<endl<<a*b*c*d;
}
main()
{
	mult(22,3);
	mult(22,3,4);
	mult(22,3,34);
}
