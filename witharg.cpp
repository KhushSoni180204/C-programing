#include<iostream>
#include<string.h>
using namespace std;
class student
{
		int sno;
		char sname[20];
	public:
		student()
		{
			sno=1;
			strcpy(sname,"ram");
			cout<<endl<<"In stu cons";
		}
		void printstu()
		{
			cout<<endl<<"sno ="<<sno<<" sname = "<<sname;
		}
};
class marks : public student
{
	protected:
		int eng,hin;
	public:
		marks()
		{
		    eng=80;
            hin=87;
            cout<<endl<<"In marks cons";
		}

        void printmarks()
		{
			cout<<endl<<"eng ="<<eng<<" hindi = "<<hin;
		}
};
class result : public marks
{
	public:
	result()
		{
            cout<<endl<<"In result cons";
		}
	void printresult()
	{
		cout<<endl<<"result = "<<eng+hin;
	}
};
main()
{
	result r1;
	r1.printstu();
	r1.printmarks();
	r1.printresult();
}
