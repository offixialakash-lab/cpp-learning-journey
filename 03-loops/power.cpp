#include <iostream>
using namespace std;
int main()
{
    float num,pow,ans,i;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Enter the power :  ";
    cin>>pow;
    ans=num;
    if(pow<0)
    {
        for(i=1;i>pow;i--)
        {
            ans=1/ans*num;
        }
        cout<<ans;
        return 0;
    }
    else if(pow==0)
    {
        cout<<1;
        return 0;
    }
    else
    {     
         for(i=1;i<pow;i++)
         {
             ans=ans*num;
         }
         cout<<ans;
    }
    
}
