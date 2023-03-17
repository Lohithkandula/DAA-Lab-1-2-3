# include <stdio.h>
# define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue()
{
int x;
printf("Enter the Data: \n");
scanf("%d",&x);
if(rear==N-1)
{
printf("Queue is Full or Overflow");
}
else if(front==-1 && rear==-1)
{
front=rear=0;
queue[rear]=x;
}
else
{
rear++;
queue[rear]=x;
}
}
void dequeue()
{
if(front==-1 && rear==-1)
{
printf("Queue is Empty or underflow");
}
else if(front==rear)
{
front=rear=-1;
}
else
{
printf("The dequeued Element is %d \n",queue[front]);
front++;
}
}
void display()
{
int i;
if(front==-1 && rear==-1)
{
printf("Queue ie Empty");
}
else
{
for(i=front;i<rear+1;i++)
{
printf("%d\n",queue[i]);
}
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
