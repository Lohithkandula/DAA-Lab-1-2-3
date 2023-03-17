# include <stdio.h>
# define N 5
int stack[N];
int top=-1;
void push()
{
int x;
printf("Enter the Data: \n");
scanf("%d",&x);
if(top==N-1)
{
printf("Stack Overflow");
}
else
{
top++;
stack[top]=x;
}
}
void pop()
{
int item;
if(top==-1)
{
printf("Stack underflow");
}
else
{
item=stack[top];
top--;
printf("You popped item %d",item);
}
}
void display()
{
int i;
for(i=top;i>=0;i--)
{
printf("%d \n",stack[i]);
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
