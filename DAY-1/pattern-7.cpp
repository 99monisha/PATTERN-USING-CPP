/*
5
    1
   12
  123
 1234
12345
*/

#include<iostream>
using namespace std;
int main()
{
    int i,n,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}