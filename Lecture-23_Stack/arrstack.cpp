#include<iostream>
using namespace std;
# define n 100
class stack
{
    int *arr;
    int top;
    public:
    stack()
    {
        arr=new int[n];
        top=-1;
    }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top]=x;

    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"No element is there";
            return;
        }
        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"No element is there"<<" ";
            return -1;
        }
      return arr[top];
    }
    bool empty()
    {
        return top==-1;
    }
};

int main()
{
  stack s;
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  cout<<s.Top()<<endl;
  s.pop(); 
  s.pop();
  s.pop();
  s.pop();
  cout<<s.Top()<<endl;
  
  

}