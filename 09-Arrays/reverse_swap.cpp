#include<iostream>
using namespace std;
int main()
{
    int arr[6]={543,234,23,65,34,2};
    int i=0,j=5;
    
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(i=0;i<=5;i++)
    {
        cout<<arr[i]<<endl;
    }
}