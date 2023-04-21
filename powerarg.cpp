#include<iostream>
using namespace std;
void power(int a,int b=2)
{
	int ans=1;
		for(int i=b;b>=1;b--)
		{
			ans=ans*a;
		}
		cout<<endl<<"power = "<<ans;
	
}
main()
{
	power(3);
	power(3,4);
}
