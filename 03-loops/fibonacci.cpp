#include<iostream>
using namespace std;
int main()
{
    int first=0,second=1,third=1,i,a;
    cout<<"Enter the number : ";
    cin>>a;
    {
        if(a<1)
        {
            cout<<"Enter valid number! ";
101
        }

        else
        {   
            for(i=1;i<=a;i++)
            {
           cout<<first<<endl;
           first=second;
           second=third;
           third=first+second;

            }
        }
    
    }

}

