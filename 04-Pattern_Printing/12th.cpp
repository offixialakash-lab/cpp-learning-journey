#include<iostream>
using namespace std;
int main()
{
    int row,col;
    for(row=1;row<=25;row+=5)
    {
        for(col=1;col<=6;col++)
        {
            cout<<row+(col-1)<<" ";
        }
        cout<<endl;
    }

}