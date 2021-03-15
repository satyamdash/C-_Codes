#include<iostream>
using namespace std;

string removedup(string s)
{
    if(s.length()==0)
    {
      return "";
    }
    char ch= s[0];
    string ans=removedup(s.substr(1));
     
    for(int i=0;i<ans.length();i++)
     {
    if(ch==ans[i])
    {
        return ans;
    }
     }
    return (ch+ans);


}

int main()
{
  cout<<removedup("eeaabbbbeeeeccccddd");
}