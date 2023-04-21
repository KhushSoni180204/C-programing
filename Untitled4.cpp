#include<iostream>
using namespace std;
class student
{
	protected:
		int sno;
		char sname[20];
	public:
		void setdata()
		{
			cout<<endl<<"Enter student ";
			cin>>sno;
			cout<<endl<<"Enter name ";
			cin>>sname;
		}
		void printdata()
		{
			cout<<endl<<"Sno = "<<sno<<"sname = "<<sname;
		}
};
class marks
{
	protected:
		int e,h;
	public:
	 	void setdata()
	 	{
	 		cout<<endl<<"Enter marks of e ";
			cin>>e;
			cout<<endl<<"Enter marks of h ";
			cin>>h;	
		};
		void printdata()
		{
			cout<<endl<<"E = "<<e<<"H = "<<h;
		}
};
class result : public marks,public student
{
	public:
	void printresult()
	{
		cout<<endl<<"result = "<<e+h;
	}
};
main()
{
	result r1;
	r1.setdata();
	r1.printdata();
	r1.setdata();
	r1.printdata();
	r1.printresult();
}
