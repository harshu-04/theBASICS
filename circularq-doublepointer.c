//circular queue using double pointer 
#include<stdio.h>
#include<stdlib.h>
typedef struct list {
	int data;
	struct list *next;
	}c;
void enq(c**,c**);
void deq(c**,c**);
void disp(c *);
int main()
{
	c *f=NULL,*r=NULL;
	 int ch;
	 do
	 {
	 			printf("1. ENQUEUE \n 2. DEQUEUE \n 3. DISPLAY \n 4: END \n");
	 			printf("enter your choice \n");
	 			scanf("%d",&ch);
	 			switch(ch)
	 			{
	 				case 1: enq(&f,&r);
			 					break;
					case 2: deq(&f,&r);
								break;
					case 3: disp(f);
								break;
					case 4 : exit(0);
					default:printf("thye choice isnt valid\n");
					}
					}while(ch<=4);
					
					return 0;
			} 				
	 			 
void enq(c **f, c **r)
		{
				c *p=NULL;
				p=(c*)malloc(sizeof(c));
				if(p!=NULL)
				{
					scanf("%d",&(p->data));
					if(*f== NULL && *r==NULL)
						*f=*r=p;
					else
					{
						(*r)-> next =p;
						*r=p;
					}
					(*r)-> next=*f;
					}
					else
					printf("memeory isnt allocated \n");
				}
void deq( c **f,c **r)
		{
			c *p=NULL;
			if(*f==NULL && *r==NULL)
			printf("empty\n");
			else
			{
				p=*f;
				printf("%d	\n",(*f)->data);
				if(*f==*r)
				*f=*r=NULL;
				else
				{
				*f=(*f)->next;
				(*r)->next=*f;
				}
				free(p);
				}
			}
void disp(c *f)
	{
		c *p=f;
		if(f==NULL)
		printf("empty \n");
		else
		{
			do{printf("%d	",p->data);
			p=p->next;
			}while(p!=f);
			printf("\n");
			}
			}
