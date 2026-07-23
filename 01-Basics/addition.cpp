#include<iostream>
using namespace std;
int main()
{
    int a=54,b=34;
    cout<<"Sum of "<<a<<" " <<"+ "<<b<<" "<<"is : "<<a+b;//88
    cout<<char(a+b);//X
    cout<<endl;
    cout<<char(a);//6
    cout<<endl;
    cout<<char(a)+char(b);//88
    cout<<endl;
    cout<<char(a)+b;//88
    cout<<endl;
    cout<<char(char(a)+char(b));//X
}