#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream if1("D:\\shyamsir\\abc.txt");
	ifstream if2("D:\\shyamsir\\maru.txt");
	ofstream of1("D:\\shyamsir\\laru.txt");
	char ch1,ch2;
    while(!if1.eof())
    {
        if1.get(ch1);
        of1<<ch1;
    }
    while(!if2.eof())
    {
        if2.get(ch2);
        of1<<ch2;
    }
	if1.close();
	if2.close();
	of1.close();
	cout<<endl<<"Copied";
}
