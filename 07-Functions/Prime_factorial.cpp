#include<iostream>
#include<climits>
using namespace std;
bool prime(int n)
{
    if(n<2)
    {
        return 0;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
}

int fact(int a)
{
    if(a<0)
    {
        cout<<"factorial of negative number is not defined" ;
        return -1;
    }
    int mul=1;
    for(int i=1;i<=a;i++)
    {
        if(mul>INT_MAX/i)
        {
            return -1;
        }
        mul=mul*i;
    }
    return mul;
}

int main()
{
    int a,b;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    cout<<a <<" is prime: "<<prime(a)<<endl;
   int returnA=fact(a);
   if(returnA==-1)
   {
    cout<<"Factorial is too large or invalid";
   }
   else
   {
     cout<<returnA;
   }
   cout<<endl;
    cout<<b <<" is prime: "<<prime(b)<<endl;
    cout<<b <<" value of factorial is: "<<fact(b)<<endl;
    cout<<a-b <<" is prime: "<<prime (a-b)<<endl;
    cout<<a-b <<" value of factorial is: "<<fact(a-b);

return 0 ;
}
    

