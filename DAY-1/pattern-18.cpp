/*
5
y 
x x 
w w w 
v v v v 
u u u u u 
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
            cout<<((char)(122-i))<<" ";
        }
        cout<<endl;
    }
    return 0;
}