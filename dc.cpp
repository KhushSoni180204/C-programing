#include<iostream>
using namespace std;
class emp
{
	private:
		int eno;
		char ename;
	public:
		
		void setdata()
		{
			cout<<endl<<"Enter employee num";
			cin>>eno;
			cout<<endl<<"Enter employee name";
			cin>>ename;
		}	
		void printdata()
		{
			cout<<endl<<" Eno = "<<eno;
			cout<<endl<<" Ename = "<<ename;
		}
};
main()
{
		emp a[100];
		int n,i;
		cout<<endl<<"Enter num of Employess";
		cin>>n;
		for(i=0;i<=n;i++)
		{
			a[i].setdata();
		}
		for(i=0;i<=n;i++)
		{
			a[i].printdata();
		}
}
