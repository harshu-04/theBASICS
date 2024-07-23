//nontail 1 to n
#include <stdio.h>
void tt(int );
int main()
{
int x ;
scanf("%d",&x);
tt(x);
 return 0;
 }
 void tt(int x)
 {
 	if(x==0)
 	return ;
 	else {
 	tt(--x);
 	printf("%d",x);
	}
	}

