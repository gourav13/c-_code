#include<iostream>
using namespace std;

class Node{
    public:
int data;
Node *next;
};
void addAtFront(Node * &head,int d)
{
    Node *newNode=new Node;
    newNode->data=d;
    newNode->next=head;
    head=newNode;
}

Node* takeInput(int n)
{   int i=0;
    Node *head=NULL;
    int data;

    while(i<n)
    {
        cin>>data;

        addAtFront(head,data);
        i++;
    }
    return head;
}

void print(Node * head)
{

    while(head!=NULL)
    {
       cout<<head->data<<" ";
       cout<<head<<" ";
        cout<<head->next<<"next ";
        head=head->next;

    }
}
void rev(Node* &head){
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

int main()
{   int n;
    cin>>n;
    bool flag=true;
    Node *head=takeInput(n);
    rev(head);
    Node *t=head;
    //print(t);
    while(flag)
    {
        if(head->next->data > head->data&&head!=NULL)
            head=head->next;
        else
            {head->next=NULL;
            flag=false;}
    }
    print(t);
   // print(head);
    //rev(head);
    print(head);
    return 0;

}
