#include<iostream>
#include<cstdio>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
struct Node *item,*head=NULL,*tail;
void create()
{

    int n,i;
    cout<<"Enter the amount of data: "<<endl;
    cin>>n;
    cout<<"\nEnter Data:"<<endl;
    for(i=0; i<n; i++)
    {
        item = new Node[sizeof(Node)];
        cin>>item->data;
        item->next = NULL;
        if (head == NULL)
        {
            head = item;
            tail = item;
        }
        else
        {
            tail->next = item;
            tail = item;
        }
    }

}

void reverse_function()
{
    Node *prv,*curr=head,*next;
    prv=next=NULL;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prv;
        prv=curr;
        curr=next;
    }
    head=prv;

}
  void print()
    {
        struct Node *temp = head;
        cout<<"Reverse : "<<endl;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

int main()
{
    create();
    reverse_function();
    print();


}
