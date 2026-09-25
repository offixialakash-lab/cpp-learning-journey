#include<iostream>
using namespace std;
int main()
{
    int row,col,a,b;
     cout<<"Enter the rows u need : ";
    cin>>a;
    cout<<"Enter the elements u need : ";
    cin>>b;
    for(row=1;row<=a;row++)
    {
        for(col=1;col<=b;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}