#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Button daba do:";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':
        cout<<"Hola"<<endl;
        break;
    case 'c':
        cout<<"Nameste"<<endl;
        break;
    case 'd':
        cout<<"Ram-Ram"<<endl;
        break;
    case 'e':
        cout<<"holando"<<endl;
        break;

    
    default:
        cout<<"Ben stokes"<<endl;
        break;
    }

}