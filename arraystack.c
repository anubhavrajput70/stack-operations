//stack implementation with the help of 1D array 
#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
void push(int);
int pop();
void peek();
void traverse();
int isempty();
int isfull();
int stack[CAPACITY],i,top=-1,ele;
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
printf("enter the element you want to push=");
scanf("%d",&item);
push(item);
break;
case 2:
item=pop();
if(item==0)
{
printf("stack underflow\n");
}
else
{
printf("popped item=%d",item);
}
break;
case 3:
peek();
break;
case 4:
traverse();
break;
case 5:
exit(0);
default:
printf("invalid choice");
}}}
void push(int ele)
{
if(isfull())
{
printf("stack overflow\n");
}
else
{
top++;
stack[top]=ele;
printf("%d pushed",ele);
}}
int pop()
{
if(isempty())
{
return 0;
}
else
{

return stack[top--];
}
}
void peek()
{
if(isempty())
{
printf("stack is empty\n");
}
else
{
printf("peek element =%d",stack[top]);}
}

void traverse()
{
if(isempty())
{
printf("stack is empty\n");
}
else
{
printf("stack elements are=\n");
for(i=0;i<=top;i++)
{
printf("  %d",stack[i]);
}
}
}
int isfull()
{
if(top==CAPACITY-1)
{
return 1;
}
else
{
return 0;
}}
int isempty()
{
if(top==-1)
{
return 1;
}
else
{
return 0;
}
}
