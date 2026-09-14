#include <iostream>
using namespace std;

int main()
{
  int a;
  cout <<"Enter your percentage : ";
  cin >>a;

  if(a>=0 && a<=100)
//not workimng as i want if i enter alphabets as cin fails to read when i enter alphabets
   {
      
      if(a<33)
      {
         cout<<"fail";
      }

      else
      {
         cout<<"pass";
      }
   
   }

  else
  {
   cout<<"give correct output";
  }
}