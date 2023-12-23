//123
//123
//123

#include<iostream>
using namespace std;
int main()
{
    int n, rows, cols;
    cout<<"Enter number of rows and columns"<<endl;
    cin>>n;
    rows=1;
    while(rows<=n)
    {
        cols=1;
        while(cols<=n)
        {
            cout<<cols;
            cols+=1;
        }
        cout<<endl;
        rows+=1;
    }
}