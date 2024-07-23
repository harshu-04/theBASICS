//tail n to 1
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
 	
 	printf("%d",x);
 	tt(--x);t
	}
	}
