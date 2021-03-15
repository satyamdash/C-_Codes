#include<iostream>
#include<climits>
using namespace std;

// bool pairsum(int a[],int n ,int k)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i]+a[j]==k)
//             {
//                 cout<<i<<" "<<j;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// optimized solution Array Should be Sorted.
bool pairsum(int a[],int n ,int k)
{
  int low=0;int high=n-1;
  while(low<high)
  {
      if(a[low]+a[high]<k)
      {
        low++;
      }
      else if(a[low]+a[high]>k)
      {
          high--;
      }
      else{
      cout<<low<<" "<<high;
      return true;
      }
  }
  return false;
}
int main(){ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    pairsum(a,n,k);
    
}