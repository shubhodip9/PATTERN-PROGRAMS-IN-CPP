/*
1
2 1
3 2 1
4 3 2 1
*/

#include<iostream>
using namespace std;
int main()
{
    int n, rows, cols;
    cout<<"Enter number of Rows"<<endl;
    cin>>n;

    rows=1;
    while(rows<=n)
    {
        cols=rows;
        while(cols>=1)
        {
            cout<<cols;
            cols-=1;
        }
        cout<<endl;
        rows+=1;
    }
}