#include<bits/stdc++.h>
using namespace std;
string DectoHexa(int n){
    int base=1;
    string ans="";
    int ld;
    while(n>0){
        ld=n%16;
        if(ld<=9){
            ans=ans+to_string(ld);
        }
        else{
            char c='A'+ld-10;
            ans.push_back(c);
        }


    }
    return ans;

}


int main(){
    int n;
    cin>>n;
    cout<<DectoHexa(n)<<endl;
}