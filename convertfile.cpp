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
		if(if1.islower(ch))
		{
			cout<<endl<<toupper(ch);
		}
		
	}
	if1.close();
}
