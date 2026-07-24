#include<iostream>
using namespace std;
int main()

{
    //if u took int a then it converts char to their respective ascii values
    int a;
    cout<<"Enter your alphabet : ";
    cin>>a;

    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')

    {
        cout<<"vowel";
    }
    
    else

    {
        cout<<"consonant";
    }
}