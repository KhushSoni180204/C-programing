#include<iostream>
using namespace std;
void printdata(char a,int b=20)
{
	int i;
  cout<<endl;
    for(i=1;i<=b;i++)
    {
        cout<<" "<<a;
    }
}    
main()
{
	printdata('z');
	printdata('b',30);
}
