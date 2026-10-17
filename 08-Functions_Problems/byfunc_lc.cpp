#include<iostream>
using namespace std;
void conv(char a)
{
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
int main()
{ 
    char a;
    cout<<"Enter the alphabet : " ;
    cin>>a;
   conv(a);

}