#include<iostream>
using namespace std;
class node
{
    public:

    int data;
    node* next;
    node* prev;

    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertatHead(node* &head,int val)
{
    node* n= new node(val);
    n->next=head;
    head->prev=n;
    if(head!=NULL)
    {
    head->prev=n;
    }
    head=n;
}
void insertatTail(node* &head,int val)
{
    
    node* n=new node(val);
    node* temp=head;
    if(head==NULL)
     {
        insertatHead(head,val);
        return;
     }
    
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
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
void deleteathead(node *&head)
{
    node*todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}
void deletion(node *&head,int pos)
{
    if(pos==1)
    {
        deleteathead(head);
    }
    node*temp=head;
    int count=1;
    while(temp!=NULL &&count!=pos)
    {
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    {
    temp->next->prev=temp->prev;
    }
    delete temp;
}
int main()
{
  node* head=NULL;
  insertatTail(head,1);
  insertatTail(head,2);
  insertatTail(head,3);
  insertatTail(head,4);
  insertatHead(head,5);
  display(head);
  deletion(head,5);
  display(head);
  return 0;
}