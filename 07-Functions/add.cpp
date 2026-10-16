#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cout<<"Enter the number: ";
    cin>>a>>b;
    cout<<add(a,b);
}
