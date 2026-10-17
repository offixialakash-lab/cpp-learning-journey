#include<iostream>
using namespace std;
int main()
{ 
    char a;
    cout<<"Enter the alphabet : " ;
    cin>>a;
   if(a>='A'&&a<='Z')
   {
    char ans= 'a'+a-'A';
    cout<<ans;
   }
   else if(a>='a'&&a<='z')
   cout<<a;
   else
   cout<<"wrong input";

}
