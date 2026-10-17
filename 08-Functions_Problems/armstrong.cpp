#include<iostream>
#include<cmath>
using namespace std;

int countdigit(int num)
{
    int count=0;
    while(num!=0)
    {
        count++;
        num/=10;
    }
    return count;
}

bool armstrong(int num, int digit)
{
    int n=num,ans=0,rem;
    while(n)
    {
        rem=n%10;
        n/=10;
        ans=ans+ pow(rem,digit);
    }
    if (ans==num)
    return 1;
    else 
    return 0;
}

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;

    // count digit
    int digit=countdigit(num);

    // armstrong number
    cout<<armstrong(num,digit);

    return 0;
}