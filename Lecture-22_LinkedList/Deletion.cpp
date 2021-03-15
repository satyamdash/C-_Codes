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
    cout<<"NULL"<<endl;
}

void deletion(node *&head,int val)
{
    if (head==NULL)
    {
        return;
    }
    // }  when linked list empty
    if(head->next==NULL)
    {
        deleteathead(head);
        return;
    }
    // } only one node.
    node *temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node *todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void deleteathead(node *&head)
{
    node *todelete=head;
    head=head->next;
    delete todelete;
}
int main()
{
 node *head=NULL;
 insertattail(head,1);
 insertattail(head,2);
 insertattail(head,3);
 display(head);
 deleteathead(head); 
 display(head);
}