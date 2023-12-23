/*
AAA
BBB
CCC
*/

#include<iostream>
using namespace std;
int main()
{
    int n, rows, cols; 
    char ch;
    cout<<"Enter the number of Rows  and Columns"<<endl;
    cin>>n;

    rows=1;
    while(rows<=n)
    {
        cols=1;
        while(cols<=n)
        {
            ch='A'+rows-1;
            cout<<ch<<" ";
            cols+=1;
        }
        cout<<endl;
        rows+=1;
    }
}