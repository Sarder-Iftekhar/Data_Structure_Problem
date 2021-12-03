#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head= NULL,*tail;

void print()
{
    struct Node *list= head;
    printf("\n linked list :" );
    while(list != NULL)
    {
      printf(" %d   ", list->data);
      list = list->next;
    }
}

void addbeg()
{
    struct Node *item;
    item = (struct Node*) malloc(sizeof(struct Node));
    printf("\n enter new data to add beginning:");
    scanf("%d",&item->data);
    item->next = head;
    head = item;
}
void reverse_function()
{
    struct Node *prv,*curr=head,*next;
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


void create()
{
          struct Node *item;
          char ch1;
          printf("\n \t\t\t Create Linked List\n");
          while(ch1 != 'n')
          {
            printf("\n Enter Data:");
            item = (struct Node*)malloc(sizeof(struct Node));
            scanf("%d", &item->data);
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
            printf("\n Do you want to enter number again ?(y/n)");
            ch1= getche();
          }
}



void main()
{
            create(); // Creation of

               addbeg();
               reverse_function(); //Add beginning

                print();


  return 0;
}

