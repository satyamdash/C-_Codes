#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int val)
    {
        data=val;
        next=NULL;

    }
};

void insertathead(node *&head,int val)
{
    node *n=new node(val);
    n->next=head;
    head=n;
}
void insertattail(node *&head,int val)
{
    node *n=new node(val);
    
    node *temp=head;
    if(head==NULL)
    {
        head=n;
        return;

    }
    
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

bool search(node *head,int key)
{
    node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int length(node*&head)
{
    int l=0;
    node*temp=head;
    while(temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
}
node * kappend(node*&head,int k)
{
    
   node*newhead;
   node*newtail;
   node*tail=head;
   int l=length(head);
   int count=1;
   while(tail->next!=NULL)
   {
       if(count==l-k)
       {
           newtail=tail;
       }
       if(count==l-k+1)
       {
           newhead=tail;
       }
       tail=tail->next;
       count++;
   }
   newtail->next=NULL;
   tail->next=head;
   return newhead;
}

int main()
{
 node *head=NULL;
 insertattail(head,1);
 insertattail(head,2);
 insertattail(head,3);
 insertattail(head,4);
 insertattail(head,5);
 insertattail(head,6);
 insertattail(head,7);
 insertattail(head,8);
 
 display(head);
 node*newhead=kappend(head,3);
 display(newhead);
}
