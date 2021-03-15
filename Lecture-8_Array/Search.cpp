#include<iostream>
using namespace std;
int LinearSearch(int a[],int n,int key){
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int key;
    int n;
    cout<<"Enter Size:";
    cin>>n;
    cout<<"Enter Key:";
    cin>>key;

    int array[n];
    
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<LinearSearch(array, n, key);
}