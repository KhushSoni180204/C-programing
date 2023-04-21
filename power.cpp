#include<iostream>
using namespace std;
class power
{
	private:
		int a,b;
	public:
		void setdata()
		{
			cout<<endl<<"Enter a value = ";
			cin>>a;
			cout<<endl<<"Enter power = ";
			cin>>b;	
		}
		void p()
		{
			int i,ans=1;
			for(i=b;b>=1;b--)
			{
				ans=ans*a;
				cout<<endl<<ans<<"= a";
			}	
		}	
		
};
main()
{
	power p1;
	p1.setdata();
	p1.p();
}
