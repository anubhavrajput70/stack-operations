//implementation of parenthese checker in c
#include<stdio.h>
#include<stdlib.h>
#define cap 50
void pop();
int matching(char,char);
void push(char);
int top=-1;
char stack[cap];
void main()
{
char exp[cap];
printf("enter some parenthesis=");
gets(exp);
for(int i=0;i<strlen(exp);i++)
{
if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
push(exp[i]);
if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
if(matching(stack[top],exp[i]))
{
pop();
}
}
if(top==-1)
printf("valid expression");
else
printf("invalid expression");
}

void push(char c)
{
if(top==cap-1)
printf("stack overflow");
else
{
top++;
stack[top]=c;
}}
void pop()
{
if(top==-1)
printf("stack underflow");
else
stack[top--];
}
int matching(char a,char b)
{
if(a=='('&&b==')')
return 1;
if(a=='['&&b==']')
return 1;
if(a=='{'&&b=='}')
return 1;
else
return 0;
}
