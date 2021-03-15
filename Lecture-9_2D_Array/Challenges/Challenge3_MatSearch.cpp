#include<iostream>
using namespace std;
// Given Sorted
int main()
{
    int n,m,key;
    cin>>n>>m>>key;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int row=0,col=m-1;
    while(row<n&&col>=0)
    {
        if(a[row][col]==key)
        {
            cout<<"fOUND";
            break;
        }
        else if(a[row][col]>key)
        {
            col--;

        }
        else{
            row++;
        }
        
    }
    return 0;
}