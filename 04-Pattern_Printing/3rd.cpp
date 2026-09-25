#include<iostream>
using namespace std;
int main()
{
    int row ,col,a,b;
    {
        cout<<"enter the number of rows : ";
        cin>>a;
        cout<<"enter how many 10 u wnt in single row : ";
        cin>>b;
        for (row=1;row<=a;row=row+1)
        {
            for(col=1;col<=b;col=col+1)
            {
                cout<<10<<" ";
            }
            cout<<endl;
        }
    }
}
