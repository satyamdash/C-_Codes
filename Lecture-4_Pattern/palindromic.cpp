//  #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//      for(int i=1;i<=n;i++){
//          for(int j=1;j<=n-i;j++){
//              cout<<" ";
//          }
//          for(int j=i;j>=1;j--){
//              cout<<j<<" ";
//          }
//          for(int j=1;j<=i;j++){
//              if(j==1){
//                  continue;
//              }
//              cout<<j<<" ";
//          }
//          cout<<endl;
//      }
        
// }
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<" ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        }
        int c=2;
        for(;j<=n+i-1;j++){
            cout<<c++<<" ";
        }
        cout<<endl;
    }
}