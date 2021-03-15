#include<iostream>
using namespace std;

int main()
{
    int a[]={10,20,30};
    cout<<*a<<endl;
    // 0th element of the array.
    // int *ptr=a;
    // for(int i=0;i<3;i++)
    // {
    // cout<<*ptr<<endl;
    // ptr++;
    // }
    for(int i=0;i<3;i++)
    {
    cout<<*(a+i)<<endl;
    }

}