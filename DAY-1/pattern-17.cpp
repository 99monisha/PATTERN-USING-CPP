/*
5
a 
b b 
c c c 
d d d d 
e e e e e

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;char i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<((char)(96+i))<<" ";
        }
        cout<<endl;
    }
    return 0;
}