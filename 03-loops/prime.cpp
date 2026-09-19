#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    
    if(a<2)
    {
        cout<<"not prime";
    }
    
    else if(a==2)
    {
        cout<<"prime";
        return 0;
    }
    
    {
        for(int i=1;i<a;i++)
        {
            if(a%i==0)
            {                                                 
                cout<<"not prime ! ";
                return 0;
            }
        }
        
        cout<<"prime";
    
    }

}