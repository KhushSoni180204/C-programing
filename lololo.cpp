#include<iostream>
#include<conio.h>
int main()
{
	int i;
	double d;
	int &r=i;
	double &s=d;
	
	i=5;
//	cout<<i;
	cout<<"valur of reference"<<r<<endl;
	d=11.7;
	cout<<d<<endl;
	cout<<s<<endl;
	return 0;
}
