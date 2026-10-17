#include<iostream>
using namespace std;
int main()
{ 
    char a;
    cout<<"Enter the alphabet : " ;
    cin>>a;
    if(a>='a'&&a<='z')
   {
    char ans= 'A'+a-'a';
    cout<<ans;
   }
   else if(a>='A'&&a<='Z')
   cout<<a;
   else
   cout<<"wrong input";

}
