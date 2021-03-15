#include<algorithm>
#include<string>
#include<iostream>

using namespace std;

int main()
{
    string str="kuch bhi";
    // convert upper case
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-=32;
        }
    }
    // cout<<str<<endl;
//    convert into lower case
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=32;
        }
    }
    // cout<<str;
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str;
}