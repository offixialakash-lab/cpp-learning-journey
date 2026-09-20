#include<iostream>
using namespace std;
int main()
{
    int n,i,ans;
    cout<<"Enter the number : ";
    cin>>n;
    ans=1;
    if(n<0)
    {
        cout<<"Enter the valid output !";
    }
    else
    {
        for (i=n;i>=1;i--)
        {
            ans=ans*i;
        }
        cout<<ans;
        return 0;
    }
//valid for 0 also as  0 is not greater than1 so loop doesn't run.
}