#include<iostream>
using namespace std;
void fibo(int term){
    int a=0,b=1,c;
    
    for(int i=1;i<=term;i++){
        cout<<","<<a;
    c=a+b;
    a=b;
    b=c;
    
    }

}
int main(){
    int n;
    cin>>n;
    fibo(n);
}