#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,ld;
    cin>>n;
    int total;
    int a=n;
    while(n>0){
        ld=n%10;
        total+=pow(ld,3);
        n=n/10;
    }
    if(total==a){
    cout<<"yes a armstrong "<<total;
    }
    else{
        cout<<"BEn stokes";
    }
    
}