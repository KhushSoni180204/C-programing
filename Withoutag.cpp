#include<iostream>
#include<string.h>
using namespace std;
class student
{
	protected: //some where
		int sno;
		char sname[20]; 
	public: //any where
		student()
		{
			sno=10;
			strcpy(sname,"Khush");
		}
		void printstu()
		{
			cout<<endl<<"sno ="<<sno<<" sname = "<<sname;
		}
};
class marks : public student
{
	protected:
		int e,h; //no where
	public: //4
		void setmarks()
		{
			cout<<endl<<"e = ";
			cin>>e;
			cout<<endl<<"h = ";
			cin>>h;
		}
		void printmarks()
		{
			cout<<endl<<e;
			cout<<endl<<h;
		}
};
class result : public marks 
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
	r1.printstu();
	r1.setmarks();
	r1.printresult();
}
