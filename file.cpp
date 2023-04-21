#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream if1("D:\\shyamsir\\abc.txt");
	ofstream of1("D:\\shyamsir\\taru.txt");
	char ch;
	int c=0;
    while(!if1.eof())
    {
        if1.get(ch);
        if(ch==' ')
        {
        	c++;
        	if(c==1)
        	{
        		cout<<ch;
			}
		}
		else
		{
			cout<<ch;
			c=0;
		}    
    }
	if1.close();
	of1.close();
	cout<<endl<<"Copied";
}
