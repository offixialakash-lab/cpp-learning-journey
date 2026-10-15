#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number: ";
    cin>>n;
    
    if(n<0)
    {
        cout<<"Enter the correct value";
        return 0;
    }

    while(i<=n)
    {
        if(i*i>n)
        cout<<i-1;
        i=i+1;
    }

}
    


