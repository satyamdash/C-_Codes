 #include<iostream>
 using namespace std;

 class node
 {
     public:
     int data;
     node*next;

     node(int val)
     {
         data=val;
         next=NULL;
     }
 };

void insertattail(node*&head,int val)
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

void makecycle(node*&head,int pos)
{
    node* temp=head;
    node *startNode;
    int count=1;
    while(temp->next!=NULL)
    {
        if(count==pos)
        {
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

bool detectcycle(node*&head)
{
    node*slow=head;
    node*fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow)
        {
            return true;
        }

    }
    return false;
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
//   makecycle(head,3);
  cout<<detectcycle(head);
//   display(head);
 }