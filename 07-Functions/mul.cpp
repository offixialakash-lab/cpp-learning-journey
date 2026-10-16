#include<iostream>
using namespace std;
int mul(int a ,int b=5)
{
    return a*b;
}
int main()
{
    
    int a;
    cout<<"Enter the number: ";
    cin>>a;
   int ans= mul(a);
    cout<<ans;
}
