#include<iostream>
#include<string.h>
using namespace std;
class khush
{
	private:
		int sno;
		string name;
		static int cnt;
	public:
	void setdata()
	{
		cout<<endl<<" Enter student no = ";
		cin>>sno;
		cout<<endl<<" Enter student name = ";
		cin>>name;
		cnt++;
	}

	void printdata()
	{
		cout<<endl<<" Student no = "<<sno<<" Student name = "<<name<<" cnt = "<<cnt;
	}
};
int khush::cnt;
main()
{
	khush k1,k2;
	k1.setdata();
	k1.printdata();
	k2.setdata();
	k2.printdata();
}
