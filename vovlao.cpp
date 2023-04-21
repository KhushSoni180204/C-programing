#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream if1("D:\shyamsir\\abc.txt");
	ofstream of1("D:\shyamsir\\maru.txt");
	ofstream of2("D:\shyamsir\\laru.txt");
	char ch;
	while(!if1.eof())
	{
		if1.get(ch);
		if(ch=='a'||ch=='i'||ch=='o'||ch=='u'||ch=='e')
		{
			of1.put(ch);
		}
		else 
		{
			of2.put(ch);
		}
	}
	if1.close();
	of1.close();
	cout<<endl<<"Copied";
}
