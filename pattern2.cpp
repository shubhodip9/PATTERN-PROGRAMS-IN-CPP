//111
//222
//333

#include<iostream>
using namespace std;
int main()
{
    int n,rows,cols;
    cout<<"Enter the number of Rows and Columns"<<endl;
    cin>>n;
    rows=1;
    while(rows<=n)
    {
        cols=1;
        while(cols<=n)
        {
            cout<<rows;
            cols+=1;
        }
        cout<<endl;
        rows+=1;
    }
}