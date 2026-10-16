#include<iostream>
using namespace std;
int incr(int &n)
{
    n=100;
    return n;
}
int main()
{
    int a=10;

    cout<<incr(a);
    cout<<endl<<a;
}