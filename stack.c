//write a menu driven program to insert and delete an element in an array (STACK)
#include<stdio.h>
#include<stdlib.h>
#define max 5
void push();
void pop();
void show();
int top=-1;
int a[max];
int main ()
    {  
        int ch;  
        do
        {  
            printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");  
            printf("\n\nEnter the choice: ");  
            scanf("%d", &ch);  
            switch (ch) 
            {  
            case 1:  
                push();  
                break;  
            case 2:  
                pop();  
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
    }  
    void push()  
    {  
        int x;  
        if (top == max - 1)  
        {  
            printf("\nOverflow!!");  
        }  
        else  
        {  
            printf("\nEnter to add to stack: ");  
            scanf("%d", &x);  
            top = top + 1;  
            a[top] = x;  
        }  
    }  
    void pop()  
    {  
        if (top == -1)
        {  
            printf("\nUnderflow!!");  
        }  
        else  
        {  
            printf("\nPopped element: %d", a[top]);  
            top = top - 1;  
        }  
    }  
    void show()  
    {  
        if (top == -1)  
        {  
            printf("\nUnderflow!!");  
        }  
        else  
        {  
            printf("\nElements present in the stack: \n");  
            for (int i = top; i >= 0; --i)  
                printf("%d \n",a[i]);  
        }  
    }  
