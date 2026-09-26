#include<iostream>
using namespace std;
int main()
{
    int row,col,a;
    cin>>a;
    for(row=1;row<=a;row+=1)
    {
        for(col=1;col<=row;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }

}