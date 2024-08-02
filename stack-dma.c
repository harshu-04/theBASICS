//dma 
#include<stdio.h>
#include<stdlib.h>
#define max 10
void inser(int[],int*);
void del(int[],int*);
void show(int[],int*);
void peek(int[],int*);
int main()
{
	int stack[max],top=-1;
  	int ch=0;
  	int *p;
  	p=stack;
  	p=(int*)malloc(max*sizeof(int));
  	do
  	{
  	
  	printf("1:insert\n");
  	printf("2:delete \n 3:show \n 4:peek\n 5:exit");
  	scanf("%d",&ch);
  	switch(ch)
  	{
  	
  		case 1:
  			inser(p,&top);
  			break;
  		case 2:
  			del(p,&top);
  			break;
  		case 3:
  			show(p,&top);
  			break;
  		case 4:
  			peek(p,&top);
  			break;
  		case 5:
  			exit(0);
		default:
			printf("invalid");
  	}
  	}while(ch<=5);
  	return 0;
}
void inser(int *p,int *top)
{
	if(*top==max-1)
		printf("overflow");
	else
	{
    	(*top)++;
       printf("insert elements\n");
       scanf("%d",(p+*top++));
       }
       
       return ;
}
void del(int *p,int *top)
{
	if(*top==-1)
		printf("underflow");
	else
	{
	(*top)--;
}
	return ;
}
void peek(int *p,int *top)
{
  
   if(*top==-1)
   	printf("stack is empty");
   else
   {
   printf("%d\n",*(p+*top));
}
}
void show(int *p,int *top)
{
	for(int i=*top;i>=0;i--)
		printf("%d  ",*(p+i));
	printf("\n");
}
