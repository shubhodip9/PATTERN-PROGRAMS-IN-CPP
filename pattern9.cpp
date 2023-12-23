/*
1
2 3
3 4 5
4 5 6 7
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
        cols=rows;
        while(cols<(2*rows))
        {
            cout<<cols<<" ";
            cols+=1;
        }
        cout<<endl;
        rows+=1;
    }
}