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
int ncr(int i, int j){
    return fact(i)/(fact(i-j)*fact(j));
}
int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
cout<<endl;
    }
    
}