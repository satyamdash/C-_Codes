#include<iostream>
using namespace std;
int fact(int num){
    int a=1;
    for(int i=1;i<=num;i++)
    {
        a=a*i;
    }
    return a;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<fact(n)/(fact(n-r)*fact(r));
}