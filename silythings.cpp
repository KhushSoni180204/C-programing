#include<iostream>
using namespace std;

class A
{
	public:
		void printdata()
		{
			cout<<endl<<"A";
		}
};
class B:public A
{
	public:
		void printdata()
		{
			cout<<endl<<"B";
		}
};
int main()
{
	B a1,a2;
	a1.printdata();
	a2.A::printdata();
	
}
