
/*
5

* * 
* * * * 
* * * * * * 
* * * * * * * * 
* * * * * * * * * * 
*/


#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}