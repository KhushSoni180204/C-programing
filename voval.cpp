#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int i,x;
	char name[20];
	char ch;
	cout<<endl<<"enter name=> ";
	cin>>name;
	x=strlen(name);
	for(i=x-1;i>=0;i--)
	{
		ch=name[i];
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			cout<<7;
		}
		else
		{
			cout<<ch;
		}
	}
}
