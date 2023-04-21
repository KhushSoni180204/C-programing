#include<iostream>
#define N 3
using namespace std;
main()
{
    int a[N][N];
    int i,j;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cout<<"\nEnter value= ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            cout<<a[i][j];
        }
    cout<<endl;
    }
}
