#include <iostream>
using namespace std;
class std
{
	private:
	int  student;;;
	char name[20];
	char sno [50];
	char em[20];
	char hm[20];
	
	public:
		void setdata()
		{
			cout<<endl<<"Enter name";
			cin>>name;
			cout<<endl<<"Enter studentno";
			cin>>sno;
			cout<<endl<<"Enter englishmarks";
			cin>>em;
			cout<<endl<<"Enter hindimarks";
			cin>>hm;
		}
		void printdata()
		{
			cout<<endl<<"std name = "<<name<<" std no = "<<sno<<" english marks = "<<em<<" hindi marks = "<<hm;		
		}
};
main()
{
	std s1,s2;
	
	s1.setdata();
	s2.setdata();
	
	s1.printdata();
	s2.printdata();
}
