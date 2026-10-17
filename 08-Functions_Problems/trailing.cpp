#include<iostream>
using namespace std;
int trailing0s(int num)
{
    int count=0;
    while(num>=5)
    {
        count=num/5+count;
        num/=5;
    }
    return count;
}

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<trailing0s(a);
}