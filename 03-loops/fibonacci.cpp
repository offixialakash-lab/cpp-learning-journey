#include<iostream>
using namespace std;
int main()
{
    int fir=0,sec=1,cur,i,a;
    cout<<"Enter the number : ";
    cin>>a;
    {
        if(a<1)
        {
            cout<<"Enter valid number! ";

        }

        else if(a==1)
        {
            cout<<0;
        }
        else if(a==2)
        {
            cout<<1;
        }
        else
        {   
            for(i=3;i<=a;i++)
            {
            cur=fir+sec;
            fir=sec;
            sec=cur;
            }
        }
    
    }

}

