#include<iostream>
using namespace std;
int main()
{
    int arr[1000]={0,1};
    int n;
    cout<<"Enter the number: " ;
    cin>>n;
    {
        for(int i=2;i<n;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
        }
    }
    cout<<arr[n-1];
}