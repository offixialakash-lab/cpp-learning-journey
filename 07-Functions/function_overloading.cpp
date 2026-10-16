#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
float add(float a,float b)
{
    return a+b;
}
int  main()
{
    float a,b;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"2nd: ";
    cin>>b;
   cout<< add(a,b);
}