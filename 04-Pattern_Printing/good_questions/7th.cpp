#include<iostream>
using namespace std;
int main()
{
    int row,col,n;
    cin>>n;
    
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=(row-1);col=col+1)
        {
            cout<<"  ";
        }

        for(col=11-row*2;col>=1;col=col-1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}