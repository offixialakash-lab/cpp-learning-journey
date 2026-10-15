#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin>>num;
     int rem,ans=0,mul=1;
     
     if(num==0)
     cout<<1;
     while(num)
     {
     rem=num%2;
     rem=rem^1;
     num=num/2;
     if(ans>INT_MAX-rem*mul)
     {
     cout<<0;
     return 0;
     }
     ans=ans+rem*mul;
     mul=mul*2;
     }
     cout<<ans;
}

