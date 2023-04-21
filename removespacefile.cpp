#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream if1("D:\\shyamsir\\abc.txt");
	ofstream of1("D:\\shyamsir\\khush.txt");
	char ch;
	char str[0];
	int c=0;
    while(!if1.eof())
    {
        if1.get(ch);
        if(ch==' ')
        {
        	c++;
        	if(c==1 && islower(ch))
        	{
        		str[0] = toupper(str[0]);
        		cout<< ch;
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
	cout<<endl<<"Copyed";
}
