//queue call by ref 
#define max 10
#include<stdlib.h>
#include<stdio.h>
void enq(int[],int*);
void deq(int[],int*,int*);
void dis(int[],int*,int*);
void peek(int[],int*);
int main()
{
	int f=-1,r=-1,ch,q[max];
	
	do
	{
		printf(" 1:insert \n 2:delete\n 3:display \n 4:peek \n 5:exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enq(q,&r);
				if(f==-1)
					f=0;
				break;
			case 2:
				deq(q,&f,&r);
				if(f==-1)
					r=-1;
				break;
			case 3:
				dis(q,&f,&r);
				break;
			case 4:
				peek(q,&f);
				break;
			case 5:
				exit(0);
			default:
				printf("invalid\n");		
		}
	}while(ch<=5);
}
void enq(int q[],int *r)
{
	if(*r==max-1)
		printf("overflow\n");
	else
	{
		int x;
		scanf("%d",&x);
		q[++*r]=x;
	}
	
}
void deq(int q[],int *f,int *r)
{
	if(*f==-1&&*r==-1)
		printf("underflow\n");
	else
	{
		int x=q[*f];
		printf("ELEMENT REMOVED :%d \n",x);
		if(*f==*r)
			*f=-1;
		else
			(*f)++;
	}
}
void dis(int q[],int *f,int *r)
{
	if(*f==-1&&*r==-1)
		printf("empty\n");
	else
	{
		for(int i=*f;i<=*r;i++)
			printf(" %d ",q[i]);
		
	}
}
void peek(int q[],int *f)
{
if(*f==-1)
	printf("empty \n");
else
	printf("%d \ns",q[*f]);
}
