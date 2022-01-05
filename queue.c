#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
    struct node *rear=0;
    struct node *front=0;
void enqueue()
{
    struct node *temp;
    int d;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the data: ");
    scanf("%d",&d);
    temp->data=d;
    temp->next=NULL;
    if(front==0 && rear==0)
    {
        rear=front=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
void display()
{
    struct node*temp;
    if(front==0 && rear==0)
    {
        printf("\nQueue is empty!\n");
    }
    else
    {
        temp=front;
        printf("\nElements in queue are: \n");
        while(temp!=0)
        {
            printf("%d \t",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void dequeue()
{
    struct node *temp;
    temp=front;
    if(front==0 && rear==0)
    {
        printf("\nQueue is empty!\n");
    }
    else
    {
        printf("\nDeleting data =%d\t",temp->data);
        front=front->next;
        free(temp);
    }
}
void peek()     //Prints the element at front
{
    printf("%d",front->data);
}

int main()
{
    enqueue();
    display();
    enqueue();
    display();
    dequeue();
    display();
    enqueue();
    display();

    return 0;
}
