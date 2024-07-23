//to check if a series is in ap
#include<stdio.h>
#include<stdlib.h>
int main(){
int *a,n;

scanf("%d",&n);
a = (int*)malloc(sizeof(int)*n);

for(int i = 0 ; i < n ; i++)
	scanf("%d",a+i);

int d = a[1] - a[0];
int f = 0;
for(int i = 2 ; i < n ; i++){
	if((a[i] - a[i-1]) != d)
	{	f = 1;
		break;
	}
	}

if(f==1)
	printf("Not an AP");
else
	printf("Is an AP");

return 0;
}
