/*
5 5 5 5 5 5 5 5 5 
 4 4 4 4 4 4 4 
  3 3 3 3 3 
   2 2 2 
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
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
