#include<iostream>
using namespace std;
int main()
{
    int arr[8]={};
    cout<<"Enter your numbers: ";
    for(char i=0;i<=7;i++)
    {
        cin>>arr[i];
    }
    int a= INT32_MAX;
    for(int i=0;i<=7;i++)
    {
        if(arr[i]<a)
        a=arr[i];
    
    }
    cout<<"our ans is : " <<a;

    }