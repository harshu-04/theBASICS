//queue
#include<stdio.h>
#include<stdlib.h>
#define max 5
void enq();
void deq();
void show();
void peek();
int f=-1,r=-1;
int a[max];
int main ()
    {  
        int ch;  
        do
        {  
            printf("\n1.ENQUEUE \n2.DEQUEUE\n3.Show\n4.End");  
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
                show();  
                break;  
            case 4:  
                exit(0);  
            default:  
                printf("\nInvalid choice!!");  
            } 
        }   while(ch<=4);
        return 0;
    }  
    
    
    void enq()
    {
     if(r==(max-1))
     {
     printf("OVERFLOW \n");
     return;
     }
     if(f==-1)
       f=0;
      
      r++;
      int x;
      printf("enter the element \n");
      scanf("%d",&x);
      a[r]=x;
      }
      
      
      void deq()
      {
       if(f==-1|| f>r)
       {
         printf("UNDERFLOW \n \n");
         r = -1;
     return;
     }
     int y;
     y=a[f];
     f++;
     printf("ELEMENT REMOVED : %d \n",y);
     }
     void show()
     {
     if(f==-1|| f>r)
       {
         printf("UNDERFLOW \n \n"); 
     return;
     }
      do{
      printf("%d",a[f]);
      f++;
      }while(f<=r);
      }
      
      
      void peek()
      {
      if(f==-1)
       {
         printf("UNDERFLOW \n \n");
     return;
     }
     printf("%d",a[f]);
     }
