#include<bits/stdc++.h>
using namespace std;
int DectoOctal(int n){
    int ans;
    int base=1;
    int ld;
    while(n>0){
        ld=n%8;
        ans+=base*ld;
        n=n/8;
        base*=10;
    }
    return ans;

}

int main(){
    int n;
    cin>>n;
    cout<<DectoOctal(n)<<endl;
}