#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *ptr;
}*top = NULL,*top1,*temp;

int count = 0;
void stack_count()
{
    printf("\n No. of elements in stack : %d", count);
}

void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}

void display()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("Stack is empty");
        return;
    }

    while (top1 != NULL)
    {
        printf("%d ", top1->info);
        top1 = top1->ptr;
    }
 }

void pop()
{
    top1 = top;

    if (top1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->ptr;
        printf("\n Popped value : %d", top->info);
        free(top);
        top = top1;
        count--;
}


void empty()
{
    if (top == NULL)
        printf("\n Stack is empty");
    else
        printf("\n Stack is not empty with %d elements", count);
}

void destroy()
{
    top1 = top;

    while (top1 != NULL)
    {
        top1 = top->ptr;
        free(top);
        top = top1;
        top1 = top1->ptr;
    }
    free(top1);
    top = NULL;
    count = 0;
}

void main()
{
    int no, ch, e;
    while (1)
    {
     printf("\n 1 - Push");
     printf("\n 2 - Pop");
     printf("\n 3 - Empty");
     printf("\n 4 - Exit");
     printf("\n 5 - Dipslay");
     printf("\n 6 - Stack Count");
     printf("\n 7 - Destroy stack");
        printf("\n Enter choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
          case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break;
          case 2:
            pop();
            break;

        case 3:
            empty();
            break;
        case 4:
            exit(0);
        case 5:
            display();
            break;
        case 6:
            stack_count();
            break;
        case 7:
            destroy();
            break;
        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}


