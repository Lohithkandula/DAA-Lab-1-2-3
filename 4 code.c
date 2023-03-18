#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *front=0,*rear=0;
void enqueue()
{
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the data \n");
scanf("%d",&newnode->data);
newnode->next=0;
if(front==0 && rear==0)
{
front=rear=newnode;
}
else
{
rear->next=newnode;
rear=newnode;
}
}
void display()
{
struct node *temp;
if(front==0 && rear==0)
{
printf("Queue is Empty");
}
else
{
temp=front;
while(temp!=0)
{
printf("%d\n",temp->data);
temp=temp->next;
}
}
}
void dequeue()
{
struct node *temp;
temp=front;
if(front==0 && rear==0)
{
printf("Queue is Empty");
}
else
{
printf("Dequeued Element is %d",front->data);
front=front->next;
free(temp);
}
}
void main()
{
int ch;
do
{
printf("\n\t 1.Enqueue\n\t 2.Dequeue\n\t 3.DISPLAY\n\t 4.EXIT");
printf("\n Enter the Choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
printf("\n\tEXIT POINT");
break;
default:
break;
}
}while(ch!=4);
}
