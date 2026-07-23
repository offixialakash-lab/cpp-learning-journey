#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    
    if(num>0)
    {
        cout<<"Your number is positive!";
    }
    else if(num==0)
    {
        cout<<"number is neither negative nor positive!";
    }
    else
    {
        cout<<"negative number!";
    }
}