#include<iostream>
using namespace std;
class student
{
	protected: //some where
		int sno;
		char sname[20]; 
	public: //any where
		void setstu()
		{
			cout<<endl<<"sno= ";
			cin>>sno;
			cout<<endl<<"sname= ";
			cin>>sname;
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
	r1.setstu();
	r1.setmarks();
	r1.printstu();
	r1.printmarks();
	r1.printresult();
}
