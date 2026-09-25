#include<iostream>
using namespace std;
int main()
{
    int row,col,a,b;
    cout<<"Enter number of rows : ";
    cin>>a;
    cout<<"Enter number of columns : ";
    cin>>b;
    for(row=1;row<=a;row++)
    {
        for(col=1;col<=b;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    
    } 
}