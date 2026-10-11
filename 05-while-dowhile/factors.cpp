#include<iostream>
using namespace std;
int main()
{
    int i=1,a;
    cout<<"Enter the number: ";
    cin>>a;
    while(i<=a)
    {
        if(a%i==0)
        cout<<i<<" ";
        i++;
    }
}