#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%4==0||i%7==0)
        continue;
        cout<<i<<" ";
    }
}