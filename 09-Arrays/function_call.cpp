#include<iostream>
using namespace std; 
void fun(int arr[],int n)
{
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int arr[5]={42,54,4556,435,5};
    fun(arr,5);
}