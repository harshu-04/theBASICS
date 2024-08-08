//circular queue
#include<stdio.h>
#include<stdlib.h>
 #include <stdbool.h>

#define max 5
void enq();
void deq();
void display();
int f=-1,r=-1;
int a[max];
int main ()
    {  
        int ch;  
        do
        {  
    
            printf("\n1.ENQUEUE \n2.DEQUEUE\n 3.SHOW 4.End");  
            printf("\n\nEnter the choice: ");  
            scanf("%d", &ch);  
            switch (ch) 
            {  
            case 1:  
                enq();  
                break;  
            case 2:  
                deq();  
                break;  
                case 3:
                display();
                break;
            case 4:  
                exit(0);  
            default:  
                printf("\nInvalid choice!!");  
            } 
        }   while(ch<=3);
        return 0;
    }  
    
    void enq()
    {
    int x;
    printf("enter the element \n");
    scanf("%d",&x);
    if(f==-1 && r==-1)
    {
    f=0;
    r=0;
    a[r]=x;
    }
    else if( (r+1)%max==f )
    {
    printf("Overflow \n");
    }
    else
    {
    r=(r+1)%max;
    a[r]=x;
    }
   }
   
   void deq()
   {
   if(f==-1 && r==-1)
   {
   printf("Underflow \n");
   }
   else if(f==r)
   {
   f=-1;
   r=-1;
   }
   else
   {
   printf("dequeued element is %d \n", a[f]);
   f= (f+1)%max;
   }
   }
    void display()
    {
    int i=f;
     if(f==-1 && r==-1)
   {
   printf("Underflow \n");
   }
   else
   {
  do{
  printf(" %d	",a[i]);
  i=(i+1)%max;
  
}while(i!= ((r+1)%max));
   }
    }
   
