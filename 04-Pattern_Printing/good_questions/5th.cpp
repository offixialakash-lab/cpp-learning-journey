#include <iostream>
using namespace std;
int main()
{
    int row,col,i;
    cout<<"Enter the input: ";
    cin>>i;

    for(row=1;row<=i;row=row+1)
    {
        for(col=1;col<=i-row;col=col+1)
        {
            cout<<" ";
        }

        for(col=1;col<=2*row-1;col=col+1)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}