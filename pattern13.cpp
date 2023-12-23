/*
    1
   23
  456
 78910
*/

#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k,value=1;
    cout<<"Enter Number of Rows"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            cout<<"  ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<value<<" ";
            value++;
        }
        cout<<endl;
    }
}