#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream if1("D:\shyamsir\\abc.txt");
	ofstream of1("D:\shyamsir\\maru.txt");
	char ch;
	while(!if1.eof())
	{
		if1.get(ch);
		if(ch==' ')
		{
			
		}
		else 
		{
			of1.put(ch);
		}
	}
	if1.close();
	of1.close();
	cout<<endl<<"Copied";
}
