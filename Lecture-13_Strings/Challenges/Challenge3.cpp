#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    
    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<str.size();i++)
    {
        freq[str[i]-'a']++;
    }
    int mx=INT_MIN;
    char ans='a';
    for(int i=0;i<26;i++)
    {
        if(mx<freq[i])
        {
            mx=max(mx,freq[i]);
            ans=i+'a';
        }
    }
    cout<<mx<<" "<<ans;
    
}