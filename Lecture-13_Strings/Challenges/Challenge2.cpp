#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str1;
    cin>>str1;
    sort(str1.begin(),str1.end());
    
    int n=stoi(str1);
    int ld;
    int ans=0;
    while(n>0)
    {
        ld=n%10;
        ans=ans*10+ld;
        n=n/10;
    }
    cout<<ans;
}