#include<iostream>
using namespace std;

class A
{
    public:
       void fucA()
    {
        cout<<"This is Inherited"<<endl;
    }
};

class B:public A
{
    public:
 void funcB()
 {
     cout<<"this is class B";
 }
};

class C:public B
{
 
};



int main()
{
 C c;
 c.fucA();
 c.funcB();
}