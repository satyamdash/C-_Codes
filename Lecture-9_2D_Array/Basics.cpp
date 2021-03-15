#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
int key;
int flag=0;
cout<<"Enter Key:";
cin>>key;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==key)
            {
                flag++;
            }
            
        }

        
    }
    if(flag==1)
    {
        cout<<"yes";
    }
    if(flag=0)
    {
        cout<<"no";
    }
    
    
}