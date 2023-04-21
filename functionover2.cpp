#include<iostream>
using namespace std;

void power(int a)
{
	cout<<endl<<a*a;
}
void power(int a,int b)
{
	int i,ans=1;
			for(i=b;b>=1;b--)
			{
				ans=ans*a;
			}
			cout<<endl<<"a = "<<ans;
}
main()
{
	power(23);
	power(2,5);
}
