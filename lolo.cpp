#include<iostream>
using namespace std;
main()
{
	int a[100]={45,2,4,87,5,47,68,17,1,35,91,3};
	int i,n=12,r,v;
	cout<<endl<<"Enter the position=>";
	cin>>r;
	cout<<endl<<"Enter the value";
	cin>>v;
	for(i=0;i<n;i++)
	{
		if(i==r-1)
		{
			cout<<" ";
		}
		else
		{
			cout<<endl<<a[i];
		}
	} 		
}
