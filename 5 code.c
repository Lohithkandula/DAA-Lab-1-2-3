#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head,*new_node,*temp,*prev_node,*next_node;
void main()
{
create_list();
insert_at_begin();
insert_at_end();
insert_at_position();
delete_at_begin();
delete_at_end();
delete_at_position();
display();
}
void create_list()
{
int choice = 1;
head = 0;
while(choice == 1)
{
new_node = (struct node *)malloc(sizeof(struct node));
printf("Enter the data : \n");
scanf("%d",&new_node->data);
new_node -> next = 0;
if(head == 0)
{
head = temp = new_node;
}
else{
temp -> next = new_node;
temp = new_node;
}
printf("Do you want to continue ? if yes : Enter 1 no : Enter 0 \n");
scanf("%d",&choice);
}
}
void display()
{
temp = head;
printf("The remaing values in the nodes are : ");
while(temp != 0)
{
printf("%d,",temp -> data);
temp = temp -> next;
}
}
void insert_at_begin()
{
new_node = (struct node *)malloc(sizeof(struct node));
printf("Enter the value of node to insert at begining : ");
scanf("%d",&new_node -> data);
new_node -> next = head;
head = new_node;
printf("Node inserted at the begining\n");
}
void insert_at_end()
{
new_node = (struct node *)malloc(sizeof(struct node));
printf("Enter the value of node to insert at end : ");
scanf("%d",&new_node -> data);
new_node -> next = 0;
printf("Node inserted at the end \n");
temp = head;
while(temp -> next != 0)
{
temp = temp -> next;
}
temp -> next = new_node;
}
void insert_at_position()
{
int pos, i = 1;
new_node = (struct node *)malloc(sizeof(struct node));
printf("enter the position of the node to insert: \n");
scanf("%d",&pos);
temp = head;
while(i<pos)
{
temp = temp -> next;
i++;
}
printf("Enter the value of node : ");
scanf("%d",&new_node -> data);
new_node -> next = temp -> next;
temp -> next = new_node;
}
void delete_at_begin()
{
temp = head;
head = head -> next;
free(temp);
printf("Firt node deleted \n");
}
void delete_at_end()
{
temp = head;
while(temp -> next != 0)
{
prev_node = temp;
temp = temp -> next;
}
if(temp == head)
{
head = 0;
free(temp);
}
else
{
prev_node -> next = 0;
free(temp);
}
printf("Last node deleted \n");
}
void delete_at_position()
{
struct node *new_node;
int pos, i = 1;
printf("Enter the position of the node to delete : ");
scanf("%d",&pos);
temp = head;
while(i<pos - 1)
{
temp = temp -> next;
i++;
}
next_node = temp -> next;
temp -> next = next_node -> next;
free(next_node);
printf("Node at given position is deleted \n");
}
