#define size 5
#include<stdio.h>
typedef struct{
	int top;
	int item[size];
}stack;
void push(stack *,int);
int pop(stack *);
main()
{
	stack s;
	s.top=-1;
	int n,j;
	printf("enter a number:\n");
	scanf("%d",&n);
	printf("enter another number:\n");
	scanf("%d",&j);
	push(&s,n);
	push(&s,j);
	printf("%d\n",pop(&s));
	printf("%d\n",pop(&s));	
	printf("%d\n",pop(&s));
}
void push(stack *s,int x)
{
if((s->top)<=size){
s->item[++(s->top)]=x;	
}	
else
{
	printf("Stack overflow!");
	exit(1);
	
}
}
int pop(stack *s)
{
	if((s->top)--<-1)
	{
		printf("Stack underflow!");
		exit(1);
	}
	else
	{
		return (s->item[(s->top)--]);
	}
}

