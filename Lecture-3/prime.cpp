#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int div=2;
    int N;
    cin>>N;
    while (N>div)
    {
    if(N%div==0){
        cout<<"Non-Prime"<<endl;
        break;
    }
    else{
        div=div+1;
    }
     }
     if(div==N)
     {
    cout<<"Prime no.";
     }
}