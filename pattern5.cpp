/*
123
456
789
*/

#include<iostream>
using namespace std;
int main()
{
    int n, rows, cols, counter=1;
    cout<<"Enter number of Rows and Columns"<<endl;
    cin>>n;

    rows=1;
    while(rows<=n)
    {
        cols=1;
        while(cols<=n)
        {
            cout<<counter;
            cols+=1;
            counter+=1;
        }
        cout<<endl;
        rows+=1;
    }
}