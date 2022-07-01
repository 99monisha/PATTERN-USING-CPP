/*
    1
   21
  321
 4321
54321
*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
cin>>n;
for(i=1;i<=n;i++)
{
    for(k=1;k<=n-i;k++)
    {
        cout<<" ";
    }
    for(j=i;j>=1;j--)
    {
        cout<<j;
    }
    cout<<endl;
}
    return 0;
}