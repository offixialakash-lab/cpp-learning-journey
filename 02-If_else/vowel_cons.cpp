#include <iostream>
using namespace std;

int main()
{
      char ch;
      cout<<"Enter the alphabet : ";
      cin>>ch;

      if(ch>='A'&& ch<='Z' || ch>='a'&&ch<='z')
      {
         if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
         {
            cout<<"vowel";
         }
         
         else
         {
            cout<<"consonant";
         }

      }
      else
      {
         cout<<"give the correct input";
      } 
}
