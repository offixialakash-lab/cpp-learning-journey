#include<iostream>
using namespace std;
int main()
{
    int a,i,sum;
    cout<<"Enter the number : ";
    cin>>a;
    sum=0;
    if(a<0)
    {
        for(i=a;i<0;i++)
        {
            sum=i+sum;
        }
        cout<<sum;
    }
    else if(a>=0)
    {
        for(i=1;i<=a;i++)
        {
            sum=sum+i;
        }
        cout<<sum;
    }
}