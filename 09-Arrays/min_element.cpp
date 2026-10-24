#include<iostream>
using namespace std;
int main()
{
    int arr[8]={34,34,46,645,2,546,54,45};
    int a= INT32_MAX;
    for(int i=0;i<=7;i++)
    {
        if(arr[i]<a)
        a=arr[i];
    
    }
    cout<<a<<endl;
    cout<<sizeof(arr)/sizeof(arr[0]);

    }