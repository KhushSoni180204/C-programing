#include<iostream>
using namespace std;
void printdata(int a)
{
	for(int i=0;i<=20;i++)
	{
		cout<<"* ";
	}
}
void printdata(int a,int b)
{
	for(int i=0;i<=b;i++)
	{
		cout<<a;
	}
}
main()
{
	printdata(1);
	printdata(2,5);
}
