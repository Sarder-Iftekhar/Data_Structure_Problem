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
void addlast()
{
    struct Node* new,*list= head;
    new = (struct Node*)malloc(sizeof(struct Node));
    printf("\n enter new data to add last:");
    scanf("%d",&new->data);
    new->next = NULL;

    while (list->next!= NULL)
    {

        list = list->next;
    }
    list->next = new;

}
void create()
{
          struct Node *item;
          char ch1,ch;
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
void addanypos()
{
    int pos,i;
    struct Node *temp= head, *temp1,*item;
    printf("\n Enter position number: ");
    scanf("%d",&pos);
    printf("\n Enter Data:");
    item = (struct Node*)malloc(sizeof(struct Node));
    scanf("%d", &item->data);
    item->next = NULL;
    for(i=1;i<pos;i++)
    {
        temp1= temp;
        temp= temp->next;
    }
    temp1->next= item;
    item->next = temp;
}
void deletefrombeg()
{
    struct Node * temp = head;
    head=head->next;
    free(temp);
}

void deletefromlast()
{
    struct Node *list= head,*list1;
    while (list->next != NULL)
    {
        list1= list;
        list = list->next;
    }
    list1->next = NULL;
    free(list);
}
void deletefrommidpos()
{
     int pos,i;
    struct Node *temp= head, *temp1;
    printf("\n Enter position number: ");
    scanf("%d",&pos);
    for(i=1;i<pos;i++)
    {
        temp1= temp;
        temp= temp->next;
    }
    temp1->next= temp->next;
    free(temp);
}
void main()
{
            create(); // Creation of
            while(1)
            {

            printf("\n 1. Insert At Beginning");
            printf("\n 2. Insert At last");
            printf("\n 3. Insert At any Middle Position");
            printf("\n 4. Delete from Beginning");
            printf("\n 5. Delete from last");
            printf("\n 6. Delete  from any Middle Position");
            printf("\n 7. Display");
            printf("\n 8. Exit");
            int option;
            printf("\n Enter Option");
            scanf("%d",&option);
            if(option==1)
               addbeg(); //Add beginning
            else if(option==2)
                addlast();
            else if(option==3)
                addanypos();// create at any position
            else if(option==4)
                deletefrombeg();
            else if(option==5)
                deletefromlast();
            else if(option==6)
                deletefrommidpos();
            else if(option==7)
                print();
            else if(option==8)
                break;
         }
  return 0;
}
