#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char name[n+1];
    cin>>name;
    bool check=true;
    for(int i=0;i<n;i++)
    {
        if(name[i]!=name[n-1-i])
        {
            check=false;
            break;
        }
    }
    if(check==true)
    {
        cout<<"Its a palindrome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    
}