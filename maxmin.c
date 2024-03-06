//wap min and mx elemnt using pointers
#include<stdio.h>
int main()
{
     int i,s,ma,mi,a[10],*p;
     printf("enter the size \n");
     scanf("%d",&s);
     printf("enter the elements \n");
     p=a;
     for(i=0;i<s;i++)
     {
     scanf("%d",(p+i));
     }
     ma=a[0];
     mi=a[0];
     for(i=0;i<s;i++)
     {
     if(ma<*(p+i))
     ma= *(p+i);
     if(mi>*(p+i))
     mi= *(p+i);
     }
     printf("max is %d ",ma);
     printf("min is %d \n",mi);
     for(i=0;i<s;i++)
     {
     printf("%d",*(p+i));
     }
     return 0;
     }
     
