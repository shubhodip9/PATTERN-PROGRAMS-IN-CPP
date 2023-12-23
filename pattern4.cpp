/*
321
321
321
*/

#include<iostream>
using namespace std;
int main()
{
    int n, rows, cols;
    cout<<"Enter the number of Rows and Columns"<<endl;
    cin>>n;

    rows=1;
    while(rows<=n)
    {
        cols=n;
        while(cols>=1)
        {
            cout<<cols;
            cols-=1;
        }
        cout<<endl;
        rows+=1;
    }
}