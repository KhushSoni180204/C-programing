#include<iostream>
using namespace std;
class india
{
	private:
		int a;
	public:
		void setdata()
		{
			cout<<endl<<"Enter the value of india";
			cin>>a;
		}	
		void printdata()
		{
			cout<<endl<<"India = "<<a;
		}
};
class us:public india
{
	private:
		int b;
	public:
		void setdata()
		{
			cout<<endl<<"Enter the value of us";
			cin>>b;
		}
		void printdata()
		{
			cout<<endl<<"Us = "<<b;	
		}		
	
};
main()
{
	india i1;
	i1.setdata();
	i1.printdata();
	us u1;
	u1.setdata();
	u1.printdata();
}
