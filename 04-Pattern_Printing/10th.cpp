#include<iostream>
using namespace std;
int main()
{
    int row,col,d,g;
    cout<<"Enter the number of row want : ";
    cin>>d;
    for(row=1;row<=d;row++)
    {
        char name= 'a' + (row-1);
        for(col=1;col<=5;col++)
        {
            cout<<name<<" " ;
        }
        cout<<endl;
    }
    
}