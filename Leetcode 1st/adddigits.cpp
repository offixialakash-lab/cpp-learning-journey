#include<iostream>
using namespace std;
int main()
{
    int num,rem,ans=0;
    cout<<"Enter the number: ";
    cin>>num;
    

    while(num>9)
    {
        ans=0;//resets for each iteration

        while(num!=0)
    {
        rem=num%10;
        num/=10;
        ans=ans+rem;
    }

    num=ans;
    }
  
    cout<<num;

}

