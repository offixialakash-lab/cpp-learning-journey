#include<iostream>
using namespace std;
int main()
{
    int n,a,rem,ans=0;
    cout<<"Enter the number: ";
    cin>>n;
    a=n;

    while(a>9)
    {while(n!=0)
    {
        rem=n%10;
        n/=10;
        ans=ans+rem;
    }
    a=ans;
    }
  
    cout<<a;

}

