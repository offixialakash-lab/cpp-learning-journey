#include<iostream>
using namespace std;
int main()
{
    int row,col,a;
    cout<<"Enter the number of rows you want : ";
    cin>>a;
    for(row=a;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

}