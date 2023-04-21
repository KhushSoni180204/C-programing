#include<iostream>
using namespace std;
class math
{
	protected:
		int a,b;
	public:
		math()
		{
			a=0;
			b=0;
		}
		math(int x,int y)
		{
			a=x;
			b=y;
		}
		void printdata()
		{
			cout<<endl<<"a = "<<a<<"b = "<<b;
		}
		void add(math m1,math m2)
		{
			a=m1.a+m2.a;
			b=m1.b+m2.b;
		}
};
main()
{
	math m1(1,4),m2(4,5),m3;
	m3.add(m1,m2);
	m3.printdata();
}
