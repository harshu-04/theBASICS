//ackermann
#include<stdio.h>
int ack(int,int);
int main()
{
	int m=1,n=2;
	printf("%d",ack(m,n));
}
int ack(int m,int n)
{
	if(m==0)
	  return n+1;
	else if(m>0&&n==0)
	  ack(m-1,1);
	else if(m>0&&n>0)
	  ack(m-1,ack(m,n-1));
	else
	  return 0;
}
