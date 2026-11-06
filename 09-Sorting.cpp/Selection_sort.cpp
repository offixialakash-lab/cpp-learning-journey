#include<iostream>
using namespace std;
int main()
{
    int arr[8]={645,673,6,65,34,7,34,6};

    for(int i=0;i<7;i++)
    {
        int index=i;
        for(int j=i+1;j<8;j++)
        {
            if(arr[j]<arr[index])
            index=j;
        }
        swap(arr[i],arr[index]);
    }
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }

}







