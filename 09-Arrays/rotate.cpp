#include<iostream>
using namespace std;
int main()
{
    int arr[7]={65,3,5,6,3245,54,2};
    int nam[7];
    for(int i=0;i<6;i++)
    {
        for(int a=i+1;a<7;a++)
        {
            nam[a]=arr[i];
            break;

        }
//no need of nested loop can be done by a single loop
    }
    nam[0]=arr[6];
    for(int i=0;i<7;i++)
    {
        arr[i]=nam[i];
    }
    
    for(int i=0;i<7;i++)
    {
      cout<<arr[i]<<" ";
    }
}
    