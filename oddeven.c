//wap to count even and odd nos/
#include<stdio.h>
int main()
{
     int i,s,e=0,o=0,a[10],*p;
     printf("enter the size \n");
     scanf("%d",&s);
     printf("enter the elements \n");
     p=a;
     for(i=0;i<s;i++)
     {
     scanf("%d",(p+i));
     }
     for(i=0;i<s;i++)
     {
          if(*(p+i) %2==0)
          e++;
          else
          o++;
          }
          printf(" even: %d \n odd: %d \n",e,o);
          return 0;
          }
