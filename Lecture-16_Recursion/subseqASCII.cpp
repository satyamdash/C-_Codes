#include<iostream>
using namespace std;

void subseq(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans+to_string(ch));

    
} 

int main()
{
    subseq("AB","");
    // char  ch='A';
    // cout<<to_string(ch);

}