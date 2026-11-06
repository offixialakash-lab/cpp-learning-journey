#include<iostream>
using namespace std;
int main()
{
    int arr[]={45,756,345,9879,345,24,38,9,8,0,675,23,5,79,9,7};
    int a = sizeof(arr)/sizeof(arr[0]),num;
    cout<<"Enter the number: " ;
    cin>>num;
    for(int i=0;i<a;i++)
    {
        if(arr[i]==num)
        {
            cout<<"It's Indices number is : "<<i<<endl;
            cout<<"It's " << i+1 << " Element" ;
            return 0;
           
        }
    }
    cout<<"the number is not present";
}