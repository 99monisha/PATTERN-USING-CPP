/*
5

1        
  2      
    3    
      4  
        5
*/

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                cout<<i;
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0; 
}