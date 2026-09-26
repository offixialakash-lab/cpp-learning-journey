#include<iostream>
using namespace std;
int main()
{
    int row,col,a;
    cout<<"Enter the number of rows u want : ";
    cin>>a;
    for(row=a;row>=1;row--)
    {
        for(col=row;col>=1;col--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}