//linked list using self ref struct and static
#include<stdio.h>
typedef struct list
{
int d;
float m;
struct list *next;
}ll;
ll A,B,C;
int main()
{
struct list   *p=NULL;  
A.d=4;
A.m=4.5;
B.d=5;
B.m=5.5;
C.d=6;
C.m=6.5;
A.next=&B;
B.next=&C;
C.next=NULL;
p=&A;
	while(p!=NULL)
	{
		printf("%d %f	",p->d,p->m);
		p=p->next;
		}
	return 0;
	}
