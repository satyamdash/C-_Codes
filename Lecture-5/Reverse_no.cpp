#include<iostream>

using namespace std;
int main(){
    int n;
    cin>>n;
    int rev;
    while(n>0){
        int ld=n%10;
        n=n/10;
        rev=rev*10+ld;
    }
    cout<<rev;

}