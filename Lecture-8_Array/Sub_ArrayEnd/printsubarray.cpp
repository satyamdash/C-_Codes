#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int MaxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        { 
           int Sum=0;
          for(int k=i;k<=j;k++)
          {
            //   cout<<a[k]<<" ";
            Sum+=a[k];
          }
        //   cout<<endl;
        MaxSum=max(MaxSum,Sum);

        }

    }
    cout<<MaxSum<<endl;

}