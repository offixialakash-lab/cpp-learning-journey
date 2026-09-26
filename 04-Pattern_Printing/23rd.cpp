#include<iostream>
using namespace std;
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
       int a=5;

        for(col=1;col<=row;col++,a--)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }



    

}