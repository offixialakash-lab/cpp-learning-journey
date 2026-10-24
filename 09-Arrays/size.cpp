#include<iostream>
using namespace std;
int main ()
{
  int name[10000];
    cout<<"Enter the number: ";
    int num,sum=0;
    cin>>num;
    for(int i=0;i < num ; i++)
    {
        cin >> name[i];
    }
    for(int i=1;i<num;i++)
    {
        cout<<name[i]<< " ";
        sum=sum+name[i];
    }
    cout<<sum;
}
