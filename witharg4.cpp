#include<iostream>
using namespace std;
class math
{
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
		math mult(math m2)
		{
			math m3;
			m3.a=a*m2.a;
			m3.b=b*m2.b;
			return m3;
		}
};
main()
{
	math m1(23,4),m2(34,5),m3;
	m3=m1.mult(m2);
	m3.printdata();
}
