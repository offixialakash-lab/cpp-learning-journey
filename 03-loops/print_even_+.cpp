#include <iostream>
using namespace std;

int main()
{
    int i=1,n;
    cout<<"enter till where u want even number : ";
    cin>>n;

    for (i;i<=n;i=i+1)
    {
         if(i%2==0)
         {
            cout<<i<<endl;
         }
    } 
}