#include<iostream>
using namespace std;

int numberofones(int n)
{
  int count;
  while(n)
  {
      n=n&(n-1);
      count++;
  }
  return count;
}

int main()
{
    int n;
    cin>>n;
    int ans;
    ans=numberofones(n);
    cout<< ans;
    

}