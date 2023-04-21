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
			cout<<endl<<"sno= ";
			cin>>sno;
			cout<<endl<<"sname= ";
			cin>>sname;
		}
		void printdata()
		{
			cout<<endl<<"sno ="<<sno<<" sname = "<<sname;
		}
};
class marks : public student
{
	protected:
		int e,h; 
	public: 
		void setdata()
		{
			cout<<endl<<"e = ";
			cin>>e;
			cout<<endl<<"h = ";
			cin>>h;
		}
		void printdata()
		{
			cout<<endl<<e;
			cout<<endl<<h;
		}
};
class result : public marks 
{
	public:
	void printdata()
	{
		cout<<endl<<"result = "<<e+h;
	}
};
main()
{
	result r1;
	r1.setdata();
	r1.printdata();
	r1.printdata();
	r1.printdata();
}
