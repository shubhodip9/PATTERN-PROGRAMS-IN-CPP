//***
//***
//***

#include<iostream>
using namespace std;
int main()
{
    int n,rows=1,cols;
    cout<<"Enter Number of Rows and Columns"<<endl;
    cin>>n;

    while(rows<=n)
    {
        cols=1;
        while(cols<=n)
        {
            cout<<"*";
            cols+=1;
        }
        cout<<endl;
        rows+=1;
    }
}