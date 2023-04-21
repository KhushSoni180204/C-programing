#include<iostream>
using namespace std;
class sts
{
	private:
		static int a;
		char c[100];
		int b;
	public:
		void setdata()
		{
			cout<<endl<<"Enter name of student => ";
			cin>>c;
			cout<<endl<<"Enter fees of student => ";
			cin>>b;
			a++;
		}
		void printdata()
		{
			cout<<endl<<"Total number of student are "<<a;
			cout<<endl<<"The name of student is "<<c;
			cout<<endl<<"The fees of student is "<<b<<endl;
		}
};
int sts::a;
main()
{
	sts s1,s2;
	s1.setdata();
	s1.printdata();
	
	s2.setdata();
	s2.printdata();
}
