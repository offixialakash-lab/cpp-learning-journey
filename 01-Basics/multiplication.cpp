#include<iostream>
using namespace std;
int main()
{
    int a=45,b=34;
    cout<<a*b;
    cout<<endl;
    char r='e',B='g';
    cout<<r*B<<endl;//10403
    cout<<char(r*B);// different type of u
    cout<<endl<<(char)r*B;//10403 as char is just coverting r and not B ;so e ascii value * b inside
}