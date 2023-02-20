#include<stdio.h>
#include<stdlib.h>
#define capacity 20
int top=-1;
int a[capacity-1];
void push(int x)
{
if(top==capacity-1)
{
	printf("Stack OverFlow \n");
}
else
{
	a[++top]=x;
}

}

void pop()
{
if(top==-1)
{
	printf("Stack UnderFlow \n");
}
else
{
	top--;
}

}

void display()
{
if(top==-1)
{
	printf("Stack is Empty \n");
}
else
{
printf("The Elements In The Stack Are ");
for(int i=0;i<top+1;i++)
{
printf(" %d -",a[i]);
}
printf("\n");
}
}

int main()
{
int ch;
while(1)
{
printf(" 1 - push(), 2 - pop(), 3 - exit() \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
int e;
printf("Enter Element \n");
scanf("%d",&e);
push(e);
display();
break;
}
case 2:
{
printf("The Popped Element is %d ",a[top]);
pop();
printf("\n");
break;
}
case 3:
{
exit(1);
}
}
}
return 0;

} 
