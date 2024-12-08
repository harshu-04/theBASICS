//bst
#include<stdio.h>
#include<stdlib.h>
typedef struct bst
{
	int d;
	struct bst *r,*l;
	}t;
void ins(t**,int);
void pre(t*);
void post(t*);
void in(t*);
int main()
{
 t*root=NULL;
 int ch,x;
 do 
 {
 		printf("1.insert\n2.display\n3.exit\n");
 		printf("choice?\n");
 		scanf("%d",&ch);
 		switch(ch)
 		{
 			case 1:	printf("enter data\n");
 						scanf("%d",&x);
 						ins(&root,x);
 						break;
 			case 2:	printf("displaying : ");
 						pre(root);
 						printf("\npost order : ");
 						post(root);
 						printf("\nin order : ");
 						in(root);
 						printf("\n");
 			case 3: exit(0);
 			}}while(ch<=3);
 			}
 	void ins(t**root,int x)
 	{
 		if(*root==NULL)
 		{	*root=(t*)malloc(sizeof(t));
 			(*root)->d=x;
 			(*root)->l=NULL;
 			(*root)->r=NULL;
 			return;
 		}
 		if(x<(*root)->d)
 		ins(&(*root)->l,x);
 		else if	(x>(*root)->d)
 		ins(&(*root)->r,x);
 		else
 		{
 		printf("cant enter duplicate values\n");
 		return;
 		}
 	}
 	
 	void post(t*root)
 	{
 	if(root != NULL)
 	{
 		post(root->l);
 		post(root->r);
 		printf("%d  ",root->d);
 	}
 	}

 void pre(t*root)
 	{
 	if(root != NULL)
 	{	printf("%d  ",root->d);
 		pre(root->l);
 		pre(root->r);
 	}
 	}

 	void in(t*root)
 	{
 	if(root != NULL)
 	{	
 			in(root->l);
 			printf("%d  ",root->d);
 		in(root->r);
 	}
 	}
