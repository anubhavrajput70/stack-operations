//stack implementation with the help of singly linked list
#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void peek();
void traverse();
struct node
{
int data;
struct node *next;
};
struct node *top=NULL,*temp;
void main()
{
int c,item;
while(1)
{
printf("\n1. push\n");
printf("2. pop\n");
printf("3. peek\n");
printf("4. traverse\n");
printf("5. exit\n");
printf("enter your choice=");
scanf("%d",&c);
switch(c)
{
case 1:
printf("enter the element to push=");
scanf("%d",&item);
push(item);
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
traverse();
break;
case 5 :
exit(0);
default:
printf("invalid choice");
}
}
}
void push(int ele)
{
struct node *ptr;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=ele;
temp->next=NULL;
temp->next=top;
top=temp;
printf("%d pushed",ele);
}
void traverse()
{
temp=top;
if(temp==NULL)
{
printf("stack is empty");
}
else
{
while(temp!=NULL)
{
printf(" %d",temp->data);
temp=temp->next;
}
}
}
void pop()
{
struct node *ptr ;
temp=top;
if(temp==NULL)
{
printf("stack underflow");
}
else{
top=temp->next;
temp->next=NULL;
printf("%d popped",temp->data);
free(temp);
}
}
peek()
{
if(top==NULL)
{
printf("stack is empty");
}
else{
printf("peek element is=%d",top->data);}
}
