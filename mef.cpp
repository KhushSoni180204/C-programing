#include<iostream>
using namespace std;
class math
{
	int a,b;
	public:
		math(){
			a=0;
			b=0;
		}
		math(int y,int z)
		{
			a=y;
			b=z;
		}
		void printdata()
		{
			cout<<endl<<"a ="<<a<<" b = "<<b;
		}
		math mul(math m2)
		{
			math m3;
			m3.a=a*m2.a;
			m3.b=b*m2.b;
			return m3;
		}
};
main()
{
	math m1(20,5),m2(10,3),m3;
	m3=m1.mul(m2);
	m3.printdata();
}
