#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=2;  
    // ans is equal to 2 because length of single element is 1.
    int curr=2;
    int pd=a[1]-a[0];
    int j=2;
    while(j<n){
        if(pd==(a[j]-a[j-1])){
            curr++;

        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        j++;
        ans=max(ans,curr);
    }
    cout<<ans<<endl;

}