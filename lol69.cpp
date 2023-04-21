#include<iostream>
using namespace std;

class lol
{
	public:
		int a,b,c;
	lol()
	{
		cout<<endl<<"Default";
		a=1;
		b=2;
		c=3;	
		cout<<endl<<a<<b<<c;
	}		
	lol(int d,int f,int g)
	{
		cout<<endl<<"Parameterized";
		a=d;
		b=f;
		c=g;
		cout<<endl<<a<<b<<c;
	}
	void sum()
	{
		cout<<endl<<"SUM of three is = "<<a+b+c;
	}
};
int main()
{
	lol l1,l2(4,5,6);
	l1.sum();
	l2.sum();
	return 0;
}
