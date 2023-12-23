/*
1
22
333
4444
*/

#include<iostream>
using namespace std;
int main()
{
    int n, rows, cols;
    cout<<"Enter number of Rows and Columns"<<endl;
    cin>>n;

    rows=1;
    while(rows<=n)
    {
        cols=1;
        while(cols<=rows)
        {
            cout<<rows;
            cols+=1;
        }
        cout<<endl;
        rows+=1;
    }
}