#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    char op;
    cout<<"Input the Character:";
    cin>>op;
    switch (op)
    {
    case '*': 
        cout<<a*b<<endl;
        break;
    case '+':
        cout<<a+b<<endl;
        break;
    case '/': 
        cout<<a/b<<endl;
        break;
    case '-': 
        cout<<a/b<<endl;
        break;
    
    default:
    cout<<"Something else";
        break;
    }
    
}