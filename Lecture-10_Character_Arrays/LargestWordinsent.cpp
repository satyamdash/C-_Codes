#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char Sent[n+1];
    cin.getline(Sent,n);
    cin.ignore(); 
    int mx=0;
    int i=0,currl=0;
    while(1)
    {
        if(Sent[i]==' '||Sent[i]=='\0')
        {
            if(currl>mx)
            {
                mx=currl;
            }
            currl=0;
            
        }
        else{
                currl++;
            }
        
        if(Sent[i]=='\0')
        {
          break;
        }
          i++;
    }
    cout<<mx;
    
}