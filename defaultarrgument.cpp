#include<iostream>
using namespace std;
void mult(int a,int b,int c=0,int d=0,int e=0)
{
	int add;
	add=a*b*c*d*e;
	cout<<endl<<add;
}
main()
{
	mult(1,3,5,7,9);
	mult(1,3,5,7);
	mult(1,3,5);
	mult(1,3);
}
