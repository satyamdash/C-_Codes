#include<iostream>
using namespace std;
// Fuction Overloading
class ApnaCollege
{
  public:
   void fun()
   {
       cout<<"Function with NO argument"<<endl;
   }

   void fun(int x)
   {
       cout<<"fUNction with int argument"<<endl;
   }
   void fun(double x)
   {
       cout<<"Function with double argument";
   }

};
// operator overloading..
class Complex 
{
   private:
   int real,img;
   public:
   Complex(int r=0,int i=0)
   {
       real=r;
       img=i;
   }
   

   Complex operator +(Complex const &obj)
   {
       Complex res;
       res.img=img+obj.img;
    
       res.real=real+obj.real;
       return res;
   }

   void Display()
   {
       cout<<real<<" + i"<<img<<endl;

   }

};

class base
{
    public:
    virtual void  print()
    {
        cout<<"This is base class print"<<endl;
    }
    void display()
    {
        cout<<"This is base class display"<<endl;
    }
};
class derived:public base
{
    public:
    void print()
    {
        cout<<"This is derived class print"<<endl;
    }
    void display()
    {
        cout<<"This is derived class display"<<endl;
    }
};

int main()
{
//   ApnaCollege p;
//   p.fun();
//   p.fun(5);
//   p.fun(6.36);

    // Complex c1(6,15);
    // Complex c2(5,20);
    // Complex c3=c1+c2;
    // c3.Display();

    base *baseptr;

    derived d;
    baseptr=&d;
    baseptr->print();
    baseptr->display();

}