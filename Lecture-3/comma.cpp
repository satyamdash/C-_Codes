#include<iostream>
using namespace std;
int main(){
    // int a=2,4,6; will give error
    int a=(2,4,6); 
    cout<<a<<endl;
    cout<<&a;
}