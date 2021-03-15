// Binary to Decimal
#include<iostream>
using namespace std;
int bintodec(int n){
    int ans=0;
    int y;
    int a=1;
    while(n>0){
        y=n%10;
        ans+=a*y;
        a*=2;    
        // For Octal  to decimal just change the base with 8.
        n=n/10;

    }
    return ans;

}

int main(){
    int n;
    cin>>n;
    cout<<bintodec(n)<<endl;
}