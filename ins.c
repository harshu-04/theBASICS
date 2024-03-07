//insertion using pointer
#include<stdio.h>
int main()
{
	int x,y,i,a[20],*p,n;
	printf("enter the size \n");
	scanf("%d",&n);
	p=a;
	printf("enter the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	printf("enter the element to insert \n");
	scanf("%d",&x);
	printf("enter the position \n");
	scanf("%d",&y);
	for(i=n;i>=y;i--)
	{
		*(p+i)=*(p+i-1);
	}
 	*(p+i)=x;
	for(i=0;i<n+1;i++)
	{
		printf("%d",*(p+i));
	}
	return 0;
	}
