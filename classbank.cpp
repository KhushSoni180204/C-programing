#include<iostream>
using namespace std;
class bank
{
	private:
		int acno;
		char cname[20];
		int balance;
	public:
		void opean_account()
		{
			cout<<endl<<" Enter account no ";
			cin>>acno;
			cout<<endl<<" Enter name of customer ";
			cin>>cname;
			cout<<endl<<" Enter balance ";
			cin>>balance;
		}
		void printdata()
		{
			cout<<endl<<"Account no= "<<acno;
			cout<<endl<<"Customer name= "<<cname;
			cout<<endl<<"Customer balance= "<<balance;
		}
		void deposit()
		{
			int a;
			cout<<endl<<" Enter your deposit ";
			cin>>a;
			balance=a+balance;
		}
		void withd()
		{
			int x;
			cout<<endl<<" Enter your withdraw ";
			cin>>x;
			balance=balance-x;
		}
};
main()
{
	bank b1;
	b1.opean_account();
	b1.printdata();
	b1.deposit();
	b1.printdata();
	b1.withd();
	b1.printdata();
}
