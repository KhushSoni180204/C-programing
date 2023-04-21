#include<iostream>
#include<string.h>
using namespace std;
class math
{
	private:
		int a,b;
	public:
		math(int x,int y)
		{
			a=x;
			b=y;
		}
		void printdata()
		{
			cout<<endl<<"a = "<<a<<"  b = "<<b;
		}
};
main()
{
	math m1(6,5),m2(4,8),m3(23,2),m4(56,4);
	m1.printdata();
	m2.printdata();
	m3.printdata();
	m4.printdata();
}
