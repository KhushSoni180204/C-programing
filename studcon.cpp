#include<iostream>
#include<string.h>
using namespace std;
class stud
{

	private:
		int sno;
		char sname[20];
		static int cnt;
	public:
		void setdata()
		{ 
			
			cout<<endl<<" Enter student name ";
			cin>>sname;
			cnt++;
			sno=cnt;
			
		}
		void printdata()
		
		{
				cout<<endl<<" sno = "<<sno<<" sname = "<<sname<<" cnt ="<<cnt;		
		}
		
};

int stud::cnt;

main()
{
	stud s1,s2,s3;
	s1.setdata();
	s1.printdata();
	s2.setdata();
	s2.printdata();
	s3.setdata();
	s3.printdata();
}
