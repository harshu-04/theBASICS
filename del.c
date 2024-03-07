//deletion using pointer
#include<stdio.h>
int main()
{
	int y,i,a[20],*p,n;
	printf("enter the size \n");
	scanf("%d",&n);
	p=a;
	printf("enter the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	printf("enter the position to delete from \n");
	scanf("%d",&y);
	for(i=y-1;i<n;i++)
	{
		*(p+i)=*(p+i+1);
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d",*(p+i));
	}
	return 0;
	}
