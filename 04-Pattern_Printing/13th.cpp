#include<iostream>
using namespace std;
int main()
{
    int col,row,a;
    cin>>a;
    for(row=1;row<=a;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}