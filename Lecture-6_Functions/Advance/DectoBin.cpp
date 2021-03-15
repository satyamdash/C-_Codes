#include<bits/stdc++.h>
using namespace std;
int Dectobin(int n){
    int ans;
    int base=1;
    int ld;
    while(n>0){
        ld=n%2;
        ans+=base*ld;
        n=n/2;
        base*=10;
    }
    return ans;

}

int main(){
    int n;
    cin>>n;
    cout<<Dectobin(n)<<endl;
}