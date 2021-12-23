#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * link;
};
struct node *head=NULL;
void insertAtFront()
{
    int item;
    printf("\nEnter the element you want to enter: ");
    scanf("%d",&item);
    struct node* temp;
    struct node* newNode=malloc(sizeof(struct node));
    newNode->data=item;
    newNode->link=head;
    head=newNode;
}
void insertAtEnd()
{
    int item;
    printf("Enter the element you want to enter: ");
    scanf("%d",&item);
    struct node* newNode=malloc(sizeof(struct node));
    struct node* temp;
    newNode->data=item;
    newNode->link=NULL;
    temp=head;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    temp->link=newNode;

}
void insertAtPos()
{
    int item,pos;
    printf("\nEnter the element you want to enter: ");
    scanf("%d",&item);
    printf("Now, enter the position: ");
    scanf("%d",&pos);
    struct node* newNode=malloc(sizeof(struct node));
    struct node* temp;
    newNode->data=item;
    newNode->link=NULL;
    temp=head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->link;
    }
    newNode->link=temp->link;
    temp->link=newNode;

}

void display()
{
    struct node * temp;
    if(head==NULL)
        printf("List is empty! ");
    else
    {
    temp=head;
    while(temp!=NULL)
    {
        printf("\n data: %d\n",temp->data);
        temp=temp->link;
    }

    }
}


int main()
{
    int ch; //ch for choice
    while(1)
    {
        printf("\nEnter your choice: \n");
        printf("1.Insert At Front\n");
        printf("2.Insert At End\n");
        printf("3.Insert at position\n");
        printf("4.Delete First Node\n");
        printf("5.Delete last Node\n");
        printf("6.Delete At Position\n");
        printf("7.Display the elements of the linked list\n");
        printf("8.Exit\n");

        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            insertAtFront();
            break;
        case 2:
            insertAtEnd();
            break;
        case 3:
            insertAtPos();
            break;

        case 7:
            display();
            break;
        case 8:
            exit(1);
            break;
        default:
            printf("Enter the correct choice!\n");
        }

    }
    return 0;

}
