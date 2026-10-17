#include<iostream>
using namespace std;

int trailing0s(int n)
{
    int count=0;
    if(n<0)
    return -1;
    else if(n==0)
    return 1;
    else
    {
        while(n)
        {
               if(n%5==0)
              
            {
                count++;
                n/=5;
            }
        }
            
    }
    return count;
}
int main()
{
    cout<<"Enter the number: ";
    int num;
    cin>>num;
    
    cout<<trailing0s(num);


}