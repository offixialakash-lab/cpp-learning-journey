#include<iostream>
using namespace std;
int main()
{
    int a,sum=0,i;
    cout<<"Enter the number : ";
    cin>>a;

    for(i=1;i<=a;i++)
    {
        sum=sum+i*i;
    }
    cout<<sum;
}
//for now this will show 0 output for even -5 and all -ive