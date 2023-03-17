#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *top=0;
void push()
{
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
printf("Enter the data \n");
scanf("%d",&newnode->data);
newnode->next=top;
top=newnode;
}
void display()
{
struct node *temp;
temp=top;
if(top==0)
{
printf("STack is Empty");
}
else
{
while(temp!=0)
{
printf("%d \n",temp->data);
temp=temp->next;
}
}
}
void pop()
{
struct node *temp;
temp=top;
if(top==0)
{
printf("Stack is Empty");
}
else
{
printf("Popped Element is %d",top->data);
top=top->next;
free(temp);
}
}
void main()
{
int ch;
do
{
printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
printf("\n Enter the Choice:");
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
printf("\n\t EXIT POINT ");
break;
default:
break;
}
}while(ch!=4);
}
