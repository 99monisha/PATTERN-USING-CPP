/*
     1 
   1 2 3 
  1 2 3 4 5 
 1 2 3 4 5 6 7 
1 2 3 4 5 6 7 8 9
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cin>>n;
    for(i=1;i<=n;i++)
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