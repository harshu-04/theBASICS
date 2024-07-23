//to find missing element in an ap
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
	{	
		if((a[i] - a[i-1]) %d == 0){
			int z = (a[i] - a[i-1]) / d;
			z--;
		for(int j = 0 ; j<z ; j++){
			printf("%d ",a[0] + ((i+j) )*d);
			}
			}
			}
	}


return 0;
}
