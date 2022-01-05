#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top;
void push()
{
    struct node *temp;
    int data;
    temp=malloc(sizeof(struct node));
    if(!temp)
    {
        printf("Stack Overflow!\n");
        return;
    }
    else
    {
        printf("Enter the data: ");
        scanf("%d",&data);
        temp->data=data;
        temp->link=top;
        top=temp;

    }

}
void pop()
{
    struct node *temp;
    if(top==NULL)
    {
        printf("Stack Underflow!\n");
        return;
    }
    else
    {
        temp=top;
        top=top->link;
        temp->link=NULL;
        free(temp);
    }
}
void peek()
{
    if(top==NULL)
    {
        printf("Stack Underflow!\n");
        return;
    }
    else
        printf("Top= %d",top->data);
}
void display()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp=top;
    if (temp == NULL)
    {
        printf("\nStack Underflow\n");
        return;
    }

    else
    {
        while (temp != NULL)
        {
            printf("%d->",temp->data);
            temp = temp->link;
        }
    }

}
int main()
{
    int ch;
    printf("*****Stack and Its Various Operations*****\n");
    while(1)
    {
            printf("\nEnter your choice: \n");
            printf("1.Push \n");
            printf("2.Pop\n");
            printf("3.Display\n");
            printf("4.Print top element\n");
            printf("5.Exit\n");
            scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("Enter the correct choice");
            break;
        }
    }
}
