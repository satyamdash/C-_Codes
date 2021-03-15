#include<iostream>
using namespace std;

int Sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prevsum=Sum(n-1);
    return prevsum+n;
}

int main()
{
    cout<<Sum(5);

}