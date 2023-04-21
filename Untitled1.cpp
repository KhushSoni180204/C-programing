#include<iostream>
using namespace std;
main()
{
	int a,i,j;
	cout<<endl<<"Enter the number of column = ";
	cin>>a;
	for(i=0;i<=a;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"/|\";
		}
		cout<<endl;
	}
}
