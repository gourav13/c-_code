#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;

    //Node(int d):data(d),next(NULL){}
};

void addAtFront(Node* &head,int data)
{
    Node *newNode=new Node;
    newNode->data=data;
    newNode->next=head;
    head=newNode;

}
/*void addAtFront(Node* &head,int d){
    ///Insert a element at the front of the LL
    Node *t = new Node(d);
    t->next = head;
    head = t;
}*/
Node  * takeInput()
{
    Node *head=NULL;
    int data;
    cin>>data;
    while(data!=-1)
        {
            addAtFront(head,data);
           cin>>data;
           }
        return head;
}
void print(Node *head)
{
    while(head!=NULL)
        {//cout<<"head"<<endl<<head<<endl;
         cout<<head->data<<" ";
          head=head->next;

    //       cout<<endl;
          // cout<<*head;
        }
        cout<<endl;

}

void reverse1(Node* &head){
    Node*current = head;
    Node*prev = NULL;
    Node*next;

    while(current!=NULL){
            ///Save the next node
        next = current->next;
        ///Make current node point to prev
        current->next = prev;

        ///Update prev & current
        prev = current;
        current = next;

    }
    head = prev;
}
void circular(Node * head)
{
    Node * fast=head;
    Node * slow=head;
    if(!head)
        return;
   // fast=fast->next;
    while(1)
    {
        if(!fast->next)
            break;

        fast=fast->next;
        slow=slow->next;
        if(!fast->next)
            break;
        fast=fast->next;
       if(slow=fast)
            break;
    }

    int c=0;
    slow=head;
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;

    }
    slow->next=NULL;
}
int main()
{
   Node *head=takeInput();
   reverse1(head);
  circular(head);
  print(head);

   // print(temp);

    return 0;
}
