/*
6
     *
    *A*
   *A*A*
  *A*A*A*
 *A*A*A*A*
*A*A*A*A*A*

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
        for(j=1;j<=2*i-1;j++)
        {
            if(j%2==0)
            {
                cout<<"A";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}