#include<iostream>
#include<climits>
using namespace std;


// Maximum Till I.
int main(){ 
    int n;
    cin>>n;
    int a[n];
    int w;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    

   int mx=INT_MIN;
   for(int i=0;i<n;i++){
       mx=max(mx,a[i]);
       cout<<mx<<" ";
   }
   

}