#include<iostream>
using namespace std;
int main()
{
    int arr[7]={53,4,356,7,45,6545,6};
    int value=arr[6];
    for(int i=5;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=value;
    for(int i =0;i<=6;i++)
    {
        cout<<arr[i]<<" ";
    }
}