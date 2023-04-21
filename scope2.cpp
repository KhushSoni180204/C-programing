#include<iostream>
#include<string.h>
using namespace std;
class stu
{
	private:
		int no;
		string name;
	public:
		void setdata()
		{
			cout<<endl<<"Enter number=> ";
			cin>>no;
			cout<<endl<<"Enter name=>";
			cin>>name;
		}
		void printdata()
		{
			cout<<endl<<"no=> "<<no<<"name => "<<name;
		}
};
main()
{
	stu s1,s2;
	s1.setdata();
	s1.printdata();
	s2.setdata();
	s2.printdata();
}
