#include<stdio.h>
#include<stdlib.h>
#define max 10
int inser(int[],int);
int del(int[],int);
void show(int[],int);
void peek(int[],int);
int main()
{
	int stack[max],top=-1;
  	int ch=0;
  	do
  	{
  	
  	printf("1:insert");
  	printf("2:delete");
  	scanf("%d",&ch);
  	switch(ch)
  	{
  	
  		case 1:
  			top=inser(stack,top);
  			break;
  		case 2:
  			top=del(stack,top);
  			break;
  		case 3:
  			show(stack,top);
  			break;
  		case 4:
  			peek(stack,top);
  			break;
  		case 5:
  			exit(0);
		default:
			printf("invalid");
  	}
  	}while(ch<=5);
  	return 0;
}
int inser(int a[],int top)
{
	if(top==max-1)
		printf("overflow");
	else
	{
    	top++;
       printf("insert elements");
       scanf("%d",&a[top]);
       }
       
       return top;
}
int del(int a[],int top)
{
	if(top==-1)
		printf("underflow");
	else
	{
	top--;
}
	return top;
}
void peek(int stack[],int top)
{
   int x;
   if(top==-1)
   	printf("stack is empty");
   else
   {
   printf("%d",stack[top]);
}
}
void show(int stack[],int top)
{
	for(int i=top;i>=0;i--)
		printf("%d ",stack[i]);
}
