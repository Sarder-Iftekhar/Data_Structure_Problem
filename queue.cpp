#include<iostream>
#include<stdlib.h>
using namespace std;
int i=0,k=0;
struct node
{
    int data;
    struct node *next;
};
struct node *top,*top3,*curr3,*curr,*lol,*lol3;
struct node *top1,*lol1,*curr1;
void enque(int a)
{
    if(i==0)
    {
       curr=(struct node*)malloc(sizeof(struct node));
       top=curr;
       curr->next=NULL;
       curr->data=a;
       lol=top;
       i++;
    }
    else
    {
        curr=(struct node*)malloc(sizeof(struct node));
        curr->next=NULL;
        curr->data=a;
        lol->next=curr;
        lol=curr;
        curr->next=NULL;
    }
}
void enque2(int a)
{
    if(k==0)
    {
       curr3=(struct node*)malloc(sizeof(struct node));
       top3=curr;
       curr3->next=NULL;
       curr3->data=a;
       lol3=top3;
       k++;
    }
    else
    {
        curr=(struct node*)malloc(sizeof(struct node));
        curr->next=NULL;
        curr->data=a;
        lol3->next=curr;
        lol3=curr;
        curr->next=NULL;
    }
}
void dequeue()
{
    struct node *temp1;
    temp1=top;
    top=top->next;
    free(temp1);
}
void copy_queue()
{
    int j=0;
    struct node *temp2;
    temp2=top;
    while(temp2!=NULL)
    {
        if(j==0)
        {
            curr1=(struct node*)malloc(sizeof(struct node));
            top1=curr1;
            lol1=curr1;
            curr1->data=temp2->data;
            curr1->next=NULL;
            j++;
        }
        else
        {

            curr1=(struct node*)malloc(sizeof(struct node));
            curr1->data=temp2->data;
            lol1->next=curr1;
            lol1=curr1;
            curr1->next=NULL;
        }
        temp2=temp2->next;
    }
}

void display()
{
    struct node *temp;
    temp=top;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void display_copy()
{
    struct node *temp3;
    temp3=top1;
    while(temp3!=NULL)
    {
        cout<<temp3->data<<"->";
        temp3=temp3->next;
    }
    cout<<"NULL"<<endl;
}
void add_list()
{
    struct node *temp;
    temp=top;
    while(temp!=NULL)
    {
        temp=temp->next;
    }
    temp->next=top3;
    while(top3!=NULL)
    {
        top3=top3->next;
        temp=temp->next;
    }
}
int main()
{
while(1)
{
    int p,q;
    cout<<"           enter ur choice        "<<endl;
    cout<<"press 1 for enque 1"<<endl;
    cout<<"press 2 for display"<<endl;
    cout<<"press 3 for dequeue"<<endl;
    cout<<"press 4 for copy queue"<<endl;
    cout<<"press 5 for display copid version"<<endl;
    cout<<"press 6 2nd queue enque"<<endl;
    cout<<"press 7 for addd"<<endl;
    cin>>p;
    if(p==1)
    {
        cout<<"value for enque 1: "<<endl;
        cin>>q;
        enque(q);
    }
    else if(p==2)
    {
        display();
    }
    else if(p==3)
    {
        dequeue();
    }
    else if(p==4)
    {
        copy_queue();
    }
    else if(p==5)
    {
        display_copy();
    }
    else if(p==6)
    {
        cout<<"value for enque 2: "<<endl;
        cin>>q;
        enque2(q);
    }
    else if(p==7)
    {
        add_list();
    }
}
}
