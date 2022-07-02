/*
1 
2 2 2 
3 3 3 3 3 
4 4 4 4 4 4 4 
5 5 5 5 5 5 5 5 5
*/


#include<iostream>
using namespace std;
int main()
{
    int n,j,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}