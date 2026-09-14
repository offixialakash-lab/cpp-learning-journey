#include<iostream>
using namespace std;
int main()
{
   int a;
   cout<<"Enter the number : ";
   cin>>a;

   if(a>=1&&a<=7)
   {
    if(a==1)
    {
        cout<<"Monday";
    }
    if(a==2)
    {
        cout<<"Tuesday";
    }
    if(a==3)
    {
        cout<<"Wednesday";
    }
    if(a==4)
    {
        cout<<"Thursday";
    }
    if(a==5)
    {
        cout<<"Friday";
    }
    if(a==6)
    {
        cout<<"Saturday";
    }
    if(a==7)
    {
        cout<<"Sunday";
    }
   }
   else
        cout<<"incorrect!type between 1-7";

}