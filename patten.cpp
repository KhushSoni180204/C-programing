#include <iostream>
using namespace std;
main()
{
	int i,j,a;
	cout<<endl<<"Enter number of Rows";
	cin>>a;
	for(i=0;i<=a;i++)
	{
		for(j=0;j<=a;j++)
		{
			if(i==2||j==2)
			{
				cout<<" ";
			}
			else
			{
				cout<<" * "; 
			}
		}
		cout<<endl;
	}
}
