#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[]={1,3,2,3,4,1,6,4,3};
    vector<int>count(k);
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=0;i<k;i++)
    {
    cout<<count[i]<<" ";
    }
    
}