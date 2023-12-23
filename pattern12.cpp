/*
ABC
ABC
ABC
*/

#include<iostream>
using namespace std;
int main()
{
    int n, rows, cols;
    char ch;
    cout<<"Enter number of Rows and Columns"<<endl;
    cin>>n;

    rows=1;
    while(rows<=n)
    {
        cols=1;
        while(cols<=n)
        {
            ch='A'+cols-1;
            cout<<ch<<" ";
            ch++;
            cols++;
        }
        cout<<endl;
        rows++;
    }
}