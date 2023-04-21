#include<iostream>
using namespace std;
class time
{
	private:
		int h,m;
	public:
		time()
		{
			h=0;
			m=0;	
		}
		time(int a,int b)
		{
			h=a;
			m=b;
		}
		void printdata()
		{
			cout<<endl<<"h = "<<h<<"m = "<<m;
		}
		void add(time t1,time t2)
		{
			int me;
			me=t1.m+t2.m;
			if(me>60)
			{
				m=me%60;
				h=t1.h+t2.h+me/60;
			}
			else
			{
				h=t1.h+t2.h;
				m=t1.m+t2.m;
			}
		}
};
main()
{
	time t1(3,40),t2(4,40),t3;
	t3.add(t1,t2);
	t3.printdata();
}
