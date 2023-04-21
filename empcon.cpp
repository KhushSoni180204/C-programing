#include<iostream>
using namespace std;
class emp
{ 
	private:
		int eno,salary;
	public:
	emp()
	{
		eno=345;
		salary=35000;		
	}	
	emp(int x,int y)
	{
		eno=x;
		salary=y;
	}
	void printdata()
	{
		cout<<endl<<" eno = "<<eno<<" salary = "<<salary;
	}
};
main()
{
	emp e1,e2,e3(456,45000),e4(567,25000);
	e1.printdata();
	e2.printdata();
	e3.printdata();
	e4.printdata();
}
