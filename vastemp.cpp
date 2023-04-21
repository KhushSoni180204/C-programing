#include<iostream>
#include<conio.h>
using namespace std;
class emp
{
	public:
		int a,b;
		
		void printdata()
		{
//			cout<<endl<<"Employee name => "<<d;
			cout<<endl<<"Employee salary => "<<a;
		}
		emp()
		{
//			cout<<endl<<"Enter Employee name => ";
//			cin>>d;
			cout<<endl<<"Enter Employee salary => ";
			cin>>a;
			b=a/10;
			cout<<endl<<"Final salary => "<<a-b;
		}
		emp(int y)
		{
			int q;
//			d=x;
			a=y;
			q=a/10;
			cout<<endl<<"Final salary => "<<a-q;
		}
};
int main()
{
	emp e1,e2(35000);
	e1.printdata();
	e2.printdata();
	return 0;
}
