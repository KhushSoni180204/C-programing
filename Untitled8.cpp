#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
       char name[20];
    public:
        void setdata()
        {
            cout<<endl<<"Enter value = ";
            cin>>name;
        }
        void printdata()
        {
            cout<<endl<<"value of name= "<<name;
        }

        student operator>(student s2)
        {
        student s3;
        int a,b;
        a=strlen(name);
        b=strlen(s2.name);
            if(a>b)
            {
                cout<<endl<<" First value is great ";
            }
            else
            {
            	cout<<endl<<" second value is great ";
			}	
        return s3;
        }
};
main()
{
    student s1,s2,s3;
    s1.setdata();
 	s2.setdata();
    s3=s1>s2;
    s1.printdata();
    s2.printdata();
    s3.printdata();
}
