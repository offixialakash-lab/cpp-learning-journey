#include<iostream>
using namespace std;
int main()
{
    int row,col,a,b;
    cout<<"How many rows u want : ";
    cin>>a;
     cout<<"How many elements square u want : ";
    cin>>b;
    for(row=1;row<=a;row++)
    {
        for(col=1;col<=b;col++)
        {
            cout<<col*col<<" " ;
        }
        cout<<endl;
    }
    
}