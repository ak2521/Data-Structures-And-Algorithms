#include<stdio.h>
#include<string.h>
#define capacity 30
struct node
{
char arr[capacity];
int top;
}s;

void pop()
{
if(s.top==-1)
{
printf("Stack is Empty\n");
}
else
{
s.top--;
}
}

void push(char x)
{
if(s.top==capacity-1)
{
printf("Stack OverFlow \n");
}
else
{
s.top=s.top+1;
s.arr[s.top]=x;
}
}

int balance()
{
char expr[30];
printf("Enter Expression : ");
scanf("%s",expr);
printf("\n");
int len=strlen(expr);
for(int i=0;i<len;i++)
{
if(expr[i]=='(' || expr[i]=='[' || expr[i]=='{' )
{
push(expr[i]);
continue;
}
else if(expr[i]==')' || expr[i]=='}' || expr[i]==']') 
{
    if(s.top==-1)
    {
        return 2;
    }
    else if(expr[i]==')' && s.arr[s.top]=='(')
    {
        pop();
    }
    else if(expr[i]=='}' && s.arr[s.top]=='{')
    {
        pop();
    }
   else if(expr[i]==']' && s.arr[s.top]=='[')
    {
        pop();
    }
    else
    {
        printf("Unbalanced Expression\n");
        return 1;
    }
}

}
    return 0;
}

int main()
{
int x=balance();
if(x==0)
{
printf("Balanced Expression");
}
return 0;
}
