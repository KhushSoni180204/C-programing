#include<iostream>
using namespace std;
class box
{
	public:
		int length;
		int breadth;
		int height;
		
	void setdata()
	{
		cout<<endl<<"Enter length,breadth,height =";
		cin>>length;
		cin>>breadth;
		cin>>height;	
	} 	
	void printdata()
	{
		cout<<endl<<"Length = "<<length<<"Breadth = "<<breadth<<"Height = "<<height;
	}
};
int main()
{
	box b1,b2;
	b1.setdata();
	b2.setdata();
	cout<<endl<<"BOX 1 :";
	b1.printdata();
	cout<<endl<<"BOX 2 :";
	b2.printdata();
	return 0;
}
