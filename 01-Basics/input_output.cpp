#include<iostream>
using namespace std;
int main()
{
   { int a,b;
    cout<<"Enter your first number : ";
    cin>>a;//>>extraction operator
    cout<<"Enter your second number : ";
    cin>>b;
    cout<<"Sum of " <<a<<" + "<<b<<" is : ";
    cout<<a+b; 
    cout<<endl;
   }
   {
      string a,b;
      cout<<"Enter your mom name : ";
      cin>>a;//no need of quotes ,we're defining it by user
      cout<<"Enter your dad name : ";
      cin>>b;
      cout << "You're the son of "<<a << " and "<<b;
   }
}
