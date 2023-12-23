/*
1
2 3
4 5 6
7 8 9 10
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
        while (cols<=rows)
        {
            cout<<counter<<" ";
            counter+=1;
            cols+=1;
        }
        cout<<endl;
        rows+=1;

    }
}