#include<iostream>
#include<climits>
using namespace std;
int main()
{

    int x,ans=0,rem;
    cout<<"Enter the number: ";
    cin>>x;
        while(x!=0)
        {
            rem=x%10;
            x/=10;
            if(ans>INT_MAX/10||ans<INT_MIN/10)
            return 0;
            ans=rem+10*ans;
        

        }
        cout<< ans;

        
    }

