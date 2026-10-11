#include<iostream>
using namespace std;
int main()
{
    int num,rem,mul=1,ans=0;
    cout<<"Enter the correct binary number: ";
    cin>>num;

    while(num>0)
    {
        rem=num%10;
        num=num/10;
        ans=ans+rem*mul;
        mul*=2;
    }
    cout<<ans;
}