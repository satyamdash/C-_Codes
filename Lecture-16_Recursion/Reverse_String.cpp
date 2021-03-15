#include<iostream>
using namespace std;

void Reverse(string str)
{
    if(str.size()==0)
    {
        return;
    }
    string ros=str.substr(1);
    Reverse(ros);
    cout<<str[0];
}
int main()
{
  string str;
  getline(cin,str);
  Reverse(str);
}