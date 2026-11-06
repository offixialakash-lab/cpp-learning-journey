#include<iostream>
using namespace std;
int main()
{
    int arr[8]={8,5,35654,34,65,43,345,63};
    int rev[8];
    for(int i=0;i<=7;i++)
    {
        rev[7-i]=arr[i];

    }
    for(int i=0;i<=7;i++)
    {
        arr[i]=rev[i];
    }
    cout<<arr[0];
}
