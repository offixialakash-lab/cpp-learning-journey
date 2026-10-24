#include<iostream>
using namespace std;
int main()
{
    
    int name[7] ={};
    cout<<"Enter the numbers: ";
    for(int i=1;i<=6;i++)
    {
        cin>>name[i];
    
    }
    int a,b;
    cout<<"Enter the index number of both elements ";
    cin>>a>>b;
     for(int i=0;i<=6;i++)
    {
        cout<<name[i]<< "  ";
    
    }
   
}