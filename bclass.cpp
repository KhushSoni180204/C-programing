#include<iostream>
using namespace std;
class book
{
	private:
		int book;
		char bname[20];
		char bid[10];
		char bprice[10];
	public:
		void setdata()
		{
			cout<<endl<<" Enter name of the book";
			cin>>bname;
			cout<<endl<<" Enter q of book";
			cin>>bid;
			cout<<endl<<" Enter total number of books";
			cin>>bprice;
		}
		void printdata()
		{
			cout<<endl<<" bName = "<<bname<<" bid = "<<bid<<" bprice = "<<bprice;
		}
}
main()
{
	book b1,b2;
	b1.setdata();
	b2.setdata();
	
	b1.printdata();
	b2.printdata();
	
}
