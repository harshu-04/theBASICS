//infix to postfix
#include<stdio.h>
#include<stdlib.h>
#define max 100
void push(char[],char,int*);
char pop(char[],int*);
int pred(char);
int main()
{
	int i=0,pos=0,top=-1;
  	char stack[max],postfix[max],ch,x,y;
  	char infix[max]={'(','a','*','b',')','-','(','c','+','d',')','/','e','^','f','\0'};	
  	while(infix[i]!='\0')
  	{
  		ch=infix[i];
  		if(ch=='(')
  		{
  			push(stack,ch,&top);
  		}
  		else if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
  		{
  			postfix[pos++]=ch;
  		}
  		else if(ch==')')
  		{
  		x=pop(stack,&top);
  		while(x!='(')
  		{
  		postfix[pos]=x;
  		pos++;
  		x=pop(stack,&top);	
  		}
  		}
  	else {
            while (top != -1 && pred(stack[top]) >= pred(ch)) {
                postfix[pos++] = pop(stack, &top);
            }
            push(stack, ch, &top);
        }
        i++;
    }

    while (top != -1) {
        postfix[pos++] = pop(stack, &top);
    }

    postfix[pos] = '\0';
    printf("Postfix Expression: %s\n", postfix);

    return 0;
}
void push(char stack[],char ch,int *top)
{
	if(*top==max-1)
		printf("overflow");
	else
	{
    	(*top)++;
        stack[*top]=ch;
       }
       return ;
}
char pop(char a[],int *top)
{ char c;
	if(*top==-1)
	{
		return a[*top];
		}
	else
	{
	c=a[*top];
	(*top)--;
	
	
	}
	return c;
}

int pred(char ch)
{
	if(ch=='^')
	return 5;
	else if(ch=='*' || ch == '%' || ch == '/')
	return 4;
	else if( ch =='+' || ch =='-' )
	return 3;
	else
	return 2;
}
