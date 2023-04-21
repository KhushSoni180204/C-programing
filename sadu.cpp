#include<iostream>
using namespace std;
class math
{
	private:
		int a,b,c;
	public:
		void setdata()
	{
		cout<<endl<<"Enter a value = ";
		cin>>a;
		cout<<endl<<"Enter a value = ";
		cin>>b;
		cout<<endl<<"Enter a value = ";
		cin>>c;
	}
		void printdata()
	{
		cout<<endl<<" a = "<<a<<" b = "<<b<<" c = "<<c;	
	}
	void operator -()
	{
		a=-a;
		b=-b;
		c=-c;
	}
};
main()
{
	math m1;
	m1.setdata();
	-m1;
	m1.printdata();
	
}

