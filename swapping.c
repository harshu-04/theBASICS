//wap to swap two nos
#include<stdio.h>
int main()
{
     int x,y,t,*p,*s;
     p=&x;
     s=&y;
     printf(" the two nos  \n");
     scanf("%d%d",p,s);
     t=*p;
     *p=*s;
     *s=t;
          printf(" the two nos %d %d ",*p,*s);
          return 0;
          }
