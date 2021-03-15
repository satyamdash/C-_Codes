#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
// only for distinct values.
vector<vector<int>>ans;
void permute(vector<int> &a,int idx)
{
    if(idx==a.size())
    {
        ans.push_back(a);
        return;
    }
    for(int i=idx;i<a.size();i++)
    {
        
        swap(a[i],a[idx]);
        permute(a,idx+1);
    }
}
int main()
{
   int n;
   cin>>n;
   vector<int> a(n);
   for(auto &i:a)
   {
       cin>>i;
   }
sort(a.begin(),a.end());
do
{
    ans.push_back(a);
} while (next_permutation(a.begin(),a.end()));

for(auto v:ans)
{
    for(auto i:v)
    {
       cout<<i<<" ";
    }
       cout<<endl;
    
}


}