#include<iostream>
using namespace std;
int main()
{
    int arr[8]={643,5884,254,7,53,456,6765,4563};
    int ans=INT32_MIN;
    for(int i = 0; i < 8; i++)
    {
        ans=max(arr[i],ans);
    }
    int sec=-1;
    for(int i=0;i<8;i++)
    if(arr[i]!=ans)
    {
        sec=max(arr[i],sec);
    }
    cout<<sec;
}
