#include<iostream>
#include<climits>
using namespace std;


int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<=n-1;i++){
        cin>>array[i];
    }
    int max_no=INT_MIN;
    int min_no=INT_MAX;
    for(int i=0;i<n;i++){
        max_no=max(max_no,array[i]);
        min_no=min(min_no,array[i]);
    }
    cout<<max_no<<","<<min_no;

}