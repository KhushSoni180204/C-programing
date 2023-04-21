#include<iostream>
using namespace std;
class usa;
class japan;
class canada;
class russia;
class india
{
	private:
		int a;
	public:
		void setdata()
		{
			cout<<endl<<" Enter the value of a = ";
			cin>>a;
		}
		void printdata()
		{
			cout<<endl<<" a = "<<a;
	    }
		friend void avg(india i1,usa u1,japan j1,canada c1,russia r1);
};
class usa
{
	private:
		int b;
	public:
		void setdata()
		{
			cout<<endl<<" Enter the value of b = ";
			cin>>b;
		}
		void printdata()
		{
			cout<<endl<<" b = "<<b;
		}
		friend void avg(india i1,usa u1,japan j1,canada c1,russia r1);
};
class japan
{
	private:
		int c;
	public:
		void setdata()
		{
			cout<<endl<<" Enter the value of c = ";
			cin>>c;
		}
		void printdata()
		{
			cout<<endl<<" c = "<<c;
		}
		friend void avg(india i1,usa u1,japan j1,canada c1,russia r1);
};
class canada
{
	private:
		int d;
	public:
		void setdata()
		{
			cout<<endl<<" Enter the value of d = ";
			cin>>d;
		}
		void printdata()
		{
			cout<<endl<<" d = "<<d;
		}
		friend void avg(india i1,usa u1,japan j1,canada c1,russia r1);
};
class russia
{
	private:
		int e;
	public:
		void setdata()
		{
			cout<<endl<<" Enter the value of e = ";
			cin>>e;
		}
		void printdata()
		{
			cout<<endl<<" e = "<<e;
		}
		friend void avg(india i1,usa u1,japan j1,canada c1,russia r1);
};
void avg()
{
	int t,a;
	t=i1.a+u1.b+j1.c+c1.d+r1.e;
	a=t/5;
}
main()
{
	india i1;
		i1.setdata();
		i1.printdata();
	usa u1;
		u1.setdata();
		u1.printdata();
	japan j1;
		j1.setdata();
		j1.printdata();
	canada c1;
		c1.setdata();
		c1.printdata();
	russia r1;
		r1.setdata();
		r1.printdata();
	avg(i1,u1,j1,c1,r1);
}
