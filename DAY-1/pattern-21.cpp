/*
5
1 2 3 4 5 
 1 2 3 4 
  1 2 3 
   1 2 
    1

*/


#include<iostream>
using namespace std;
int main()
{ 
    int n,i,j,k;
    cin>>n;
    for(i=n;i>=1;i--)
    {
        for(k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}