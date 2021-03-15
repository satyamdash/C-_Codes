 #include<iostream>
 #include<bits/stdc++.h>
using namespace std;
int main(){ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
            curr_sum+=a[j];
            
        }
        maxsum=max(maxsum,curr_sum);
    }
    cout<<maxsum<<endl;
}