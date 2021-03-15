#include<iostream>
using namespace std;
void BubbleSort(int a[],int n){
    int temp;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         if(a[j]>a[j+1]){
    //             temp=a[j];
    //             a[j]=a[j+1];
    //             a[j+1]=temp;
    //         }
    //     }
    // } O(n^2)
    int counter=1;
    while(counter<n-1){
        for(int i=0;i<n-counter;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }

        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    BubbleSort(a,n);

}