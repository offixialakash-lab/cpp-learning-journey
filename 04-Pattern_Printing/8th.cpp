#include<iostream>
using namespace std;
int main()
{
    int row,col;
    
    for(row=1;row<=5;row++)
    {
        for(col='a';col<='e';col++)
        {
            cout<<char(col)<<" " ;
        }
        cout<<endl;
    }
    
}