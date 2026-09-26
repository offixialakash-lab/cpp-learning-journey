#include<iostream>
using namespace std;
int main()
{
    int row,col,a;
    cout<<"Enter the number of rows you want: ";
    cin>>a;
    for(row=1;row<=a;row++)
    {
        for(col=1;col<=a-row;col++)
        {
            cout<<"  ";
        }
        cout<<"";
        for(col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }

}