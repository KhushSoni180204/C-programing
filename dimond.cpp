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
class marks : public virtual student
{
	protected:
		int e,h;
	public:
	 	void setmarks()
	 	{
	 		cout<<endl<<"Enter marks of e ";
			cin>>e;
			cout<<endl<<"Enter marks of h ";
			cin>>h;	
		};
		void printmarks()
		{
			cout<<endl<<"E = "<<e<<"H = "<<h;
		}
};
class sport :public virtual student
{
	protected:
		int c;
	public:
		void setsp()
		{
			cout<<endl<<"Enter marks of s ";
			cin>>c;
		}
		void printsp()
		{
			cout<<endl<<"sp = "<<c;
		}
};
class result : public marks,public sport
{
	public:
	void printresult()
	{
		cout<<endl<<"result = "<<e+h+c;
	}
};
main()
{
	result r1;
	r1.setdata();
	r1.setmarks();
	r1.setsp();
	r1.printdata();
	r1.printmarks();
	r1.printresult();
}
