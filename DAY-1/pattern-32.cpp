/*
     *    
   *   *   
  *      *  
 *        * 
*           *

*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;

     for(i=0;i<=4;i++)
    {
        
        for(j=1;j<=8;j++)
        {
            if(i+j==4 || j-i==4)
            {
                cout<<"*";
            }
        else
        {
            cout<<" ";
        }
           
        }
        cout<<endl;
    }
    return 0;
}