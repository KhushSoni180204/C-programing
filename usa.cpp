#include<iostream>
using namespace std;
class india
{
	private:
		int a;
	public:
		void setdata()
		{
			cout<<endl<<" Enter the value of a = ";
			cin>>a;
		}
		void printdata()
		{
			cout<<endl<<" a = "<<a;
		}
};
class usa
{
	private:
		int b;
	public:
		void setdata()
		{
			cout<<endl<<" Enter the value of b = ";
			cin>>b;
		}
		void printdata()
		{
			cout<<endl<<" b = "<<b;
		}
		
};
main()
{
	india i1;
		i1.setdata();
		i1.printdata();
	usa u1;
		u1.setdata();
		u1.printdata();
}
