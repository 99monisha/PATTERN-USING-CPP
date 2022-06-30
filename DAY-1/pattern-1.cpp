/*
5

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<n;i++)
    {
        for(j=1;j<i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}