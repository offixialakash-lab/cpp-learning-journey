#include<iostream>
using namespace std;
int main()
{
    int row,col,a,b;
    cout<<"Enter the rows : ";
    cin>>a;
    cout<<"Enter the number of elements u want : ";
    cin>>b;
    for(row=1;row<=a;row++)
    {
        for(col=1;col<=b;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;

    }

}