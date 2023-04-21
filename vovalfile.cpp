#include<iostream>
#include<fstream>
using namespace std;

main()
{
ifstream if1("D:\shyamsir\\abc.txt");
char ch;
int c=0;
while(!if1.eof())
{
	if1.get(ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		cout<<7;
		c++;
	}
	else
	{	
		cout<<ch;
	}
}
if1.close();
cout<<endl<<" Total voval = "<<c;
}
