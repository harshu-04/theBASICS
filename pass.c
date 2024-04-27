//wap to pass a structure to a fucntion
#include<stdio.h>
 struct date {
 int d;
 char m[10];
 int y;
 };
 void pp(struct date );
 
 int main()
 {
  struct date s;
  scanf("%d%s%d",&s.d,s.m,&s.y);
  pp(s);
  return 0;
  }
  
  void pp( struct date s)
  {
  printf("%d %s %d",s.d,s.m,s.y);
  }
  
