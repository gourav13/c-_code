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
Node  * takeInput(int n)
{   int i=1;
    Node *head=NULL;
     int data;

    while(i<=n)
        {
            cin>>data;
            addAtFront(head,data);
             i++;

        }
        return head;
}
void print(Node *head)
{
    while(head!=NULL)
        {//cout<<"head"<<endl<<head<<endl;
         cout<<head->data<<" ";


    //       cout<<"head->next"<<endl;
  //         cout<<head->next;
  //cout<<endl<<"head move forward"<<endl;;
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

Node* appendl(Node* head,int n){
    if ((!head) || (!head->next) || n<=0)
        return head;
    Node * curr=head,*curr2=head, *prev=NULL;
    int i(1);
    while(curr->next){
        if (i<n) i++;
        else{
            prev= curr2;
            curr2= curr2->next;
        }
        curr=curr->next;
    }
    if (i<n){
      //  cout<<"invalid input for N"<<endl;
        return head;
    }
    prev->next=NULL;
    curr->next=head;
    head=curr2;
    return head;
}

Node * append(Node *head,int pos)
{
    Node * temp=head;
    Node *slow=head;
    Node *fast=head;
      if(!head)
            return head;
       fast=fast->next;
            int i=1;
    while(i<pos)
    {
        if(fast!=NULL)
            {fast=fast->next;i++;}
        else
            break;
    }
    while(fast->next!=NULL&&fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    temp=slow->next;;
    fast->next=head;
    slow->next=NULL;
    return temp;

}

int main()
{
   int n, q,x;
   cin>>n;
   Node *head=takeInput(n);


   reverse1(head);
//   print(head);
   cin>>q;
   Node * temp=appendl(head,q);
   print(temp);

    return 0;
}
