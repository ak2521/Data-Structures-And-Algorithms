#include<stdio.h>
#include<string.h>
#define capacity 20
int top=-1;
char arr[capacity-1];
int flag=0;
void push(char x)
{
if(top==capacity-1)
{
printf("Stack Overflow \n");
}
else
{
arr[++top]=x;
}
}
void pop()
{
if(top==-1)
{
printf("Stack UnderFlow\n");
}
else
{
top--;
}
}

int BalanceP()
{
char expr[20];
printf("Enter Expression : \n");
scanf("%s",expr);
int len=strlen(expr);
for(int i=0;i<len;i++)
{
if(expr[i]=='(' || expr[i]=='{' || expr[i]=='[')
{
push(expr[i]);
continue;
}
else if(expr[i]==')' || expr[i]=='}' || expr[i]==']') 
{
    if(top==-1)
    {
        return 2;
    }
    else if(expr[i]==')' && arr[top]=='(')
    {
        pop();
    }
    else if(expr[i]=='}' && arr[top]=='{')
    {
        pop();
    }
   else if(expr[i]==']' && arr[top]=='[')
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
int x=BalanceP();
if(x==0)
{
    printf("Balanced Expression");
    
}
}
