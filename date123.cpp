#include<iostream>
#include<conio.h>
using namespace std;

class Date
{
	public:
		int day,month,year;
	date()
	{
		cout<<endl<<"Default constructure:";
		day=15;
		month=11;
		year=2015;		
	}
	date(int d,int m,int y)
	{	
		cout<<endl<<"Argumented Constructor:";
		day=d;
		month=m;
		year=y;
	}
	void show()
	{
		cout<<endl<<day<<"/"<<month<<"/"<<year;
	}
};
int main()
{
	Date d1,d2;
	d1.date();
	d1.show();
	d2.date(17,12,2022);
	d2.show();
	return 0;
}
