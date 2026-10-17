#include<iostream>
using namespace std;

bool won(int num)
{
    if (num%4==0)
    return 0;
    else
    return 1;
}
int main ()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int result=won(num);
    if(result ==1)
    cout<<"A will win";
    else
    cout<<"A will lose" ;
}