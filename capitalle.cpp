#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream if1("D:\\shyamsir\\abc.txt");
	char ch;
	char str[0];
	int c=0,a;
	a=char(ch);
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
			if(c==0)
			{
			cout<<ch;
			}
			else
			{
			cout<<char(toupper(ch));			
			}
			c=0;
		}  
    }
	if1.close();
}
