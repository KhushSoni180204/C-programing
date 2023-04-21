#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream if1("D:\shyamsir\\abc.txt");
	ofstream of1("D:\shyamsir\\maru.txt");
	char a;	
	while(!if1.eof())
	{
		if1.get(a);
		of1<<a;
	}
	if1.close();
	of1.close();
	cout<<endl<<"copyed";
}
