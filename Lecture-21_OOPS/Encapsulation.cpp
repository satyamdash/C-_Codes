#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    void funcA()
    {
        cout<<"Func a"<<endl;
    }
    private:
    int b;
    void funcB()
    {
        cout<<"Func b"<<endl;
    }

    protected:
    int c;
    void funcC()
    {
        cout<<"Func c"<<endl;
    }

};


int main()
{
    A obj;
    obj.funcA();
}