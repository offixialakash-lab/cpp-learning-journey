#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,2,3,5,6,7};
   for(int i=1;i<=7;i++)
   {
    bool found=false;
    for(int a=0;a<6;a++)
    {
        if(arr[a]==i)
        {
            found=true;
            break;
        }
    }
    if (found==0)
    {
        cout<<"missing number is : " << i ;
    }
}
    
}

