#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    int num=x,rem,ans=0;
    if(x<0)
    {
        return 0;
    }
    while(num)
    {
        rem=num%10;
        num=num/10;
        if(ans>INT_MAX/10)
        return 0;
        ans=ans*10+rem;
    }
    if(x==ans)
    {cout<<"correct";
    return 1;}
    else 
    {cout<<"not";
    return 0;}
}