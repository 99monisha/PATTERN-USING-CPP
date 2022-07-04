/*
1 2 3 4 5 6 7 8 9 
 1 2 3 4 5 6 7 
  1 2 3 4 5 
   1 2 3 
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
        for(j=1;j<=2*i-1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}