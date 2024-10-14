// single linked list menu
//  create a single Linked list and assume that a pointer PTR points to the
//  first node of the link list
//conditons for the presence of single or two nodes is not in all funcntions
#include <stdio.h>
#include <stdlib.h>
typedef struct sll {
    int d;
    struct sll* next;
} s;
s* insert(s*);
void disp(s*);
void count(s*);
void evcount(s*);
void odcount(s*);
s* del(s*);
s* firstins(s*);
s* secins(s*);
s* newlast(s*);
s* newbeflast(s*);
s* newbefspecific(s*);
s* newaftspecific(s*);
s* delsec(s*);
s* dellast(s*);
s* delseclast(s*);
void disprev(s*);
s* rev(s*);
int main() {
    s* ptr = NULL;
    int c;
    do {
        printf(
            "1.INSERT\n2.DISPLAY\n3.EXIT\n4.COUNT NODES\n5.COUNT EVEN "
            "NODES\n6.COUNT ODD NODES\n7.DELETE\n8.INSERT BEFORE FIRST NODE\n9.INSERT AFTER FIRST NODE\n"
            "10.NEW AFTER LAST\n11.NEW NODE BEFORE LAST NODE\n12.NEW BEFORE SPECIFIC\n13.NEW AFTER SPECIFIC\n"
            "14.DELETE SECOND NODE\n15.DELETE LAST NODE\n16.DELETE SECOND LAST \n17.DISPLAY IN REV ORDER\n18.REVERSE\n");
        printf("enter your choice \n");
        scanf("%d", &c);
        switch (c) {
            case 1:
                ptr= insert(ptr);
                break;
            case 2:
                disp(ptr);
                break;
            case 3:
                exit(0);
            case 4:
                count(ptr);
                break;
            case 5:
                evcount(ptr);
                break;
            case 6:
                odcount(ptr);
                break;
            case 7:
                ptr = del(ptr);  
                break;
            case 8:
                ptr=firstins(ptr);
                break;
            case 9:
                ptr=secins(ptr);
                break;
            case 10:
                ptr=newlast(ptr);
                break;
            case 11:
                ptr= newbeflast(ptr);
                break;
            case 12:
                ptr=newbefspecific(ptr);
                break;
            case 13:
                ptr=newaftspecific(ptr);
                break;
            case 14:
                ptr=delsec(ptr);
                break;
            case 15:
                ptr=dellast(ptr);
                break;
            case 16:
                ptr=delseclast(ptr);
                break;
            case 17:
                disprev(ptr);
                break;
            case 18:
                ptr=rev(ptr);
                break;
            default: printf("inavlid") ;
        }
    } while (c <= 18);
}
s* insert(s* ptr) {
    s* p = NULL;
    p = (s*)malloc(sizeof(s));
    if (p != NULL) {
        printf("enter the data\n");
        scanf("%d", &p->d);
        p->next=NULL;
        if(ptr==NULL)
        return p;
        s*t=ptr;
        while(t->next!=NULL)
        {
            t=t->next;
        }
        t->next=p;
    }
    return ptr;
}
void disp(s* ptr) {
    if (ptr == NULL) {
        printf("empty\n");
        return;
    }

    while (ptr != NULL) {
        printf("%d  ", ptr->d);
        ptr = ptr->next;
    }
    printf("\n");
}
void count(s* ptr) {
    int c = 0;
    while (ptr != NULL) {
        c++;
        ptr = ptr->next;
    }
    printf("NODES %d \n", c);
}
void evcount(s* ptr) {
    int i = 1, c = 0;
    while (ptr != NULL) {
        if (i % 2 == 0) c += 1;
        ptr = ptr->next;
        i++;
    }
    printf("EVEN NODES ARE %d \n", c);
}
void odcount(s* ptr) {
    int i = 1, c = 0;
    while (ptr != NULL) {
        if (i % 2 != 0) c++;
        ptr = ptr->next;
        i++;
    }
    printf("ODD NODES ARE %d \n", c);
}
s* del(s* ptr) {
    s* p = NULL;
    if (ptr == NULL)
        printf("empty \n");
    else {
        p = ptr;
        printf("DELETED %d \n ", ptr->d);
        ptr = ptr->next;
        free(p);
    }
    return ptr;
}
s* firstins(s*ptr)
{
    s*p=NULL;
    p=(s*)malloc(sizeof(s));
    if(p!=NULL)
    {
        printf("Enter the data \n");
        scanf("%d \n",&p->d);
        p->next=ptr;
        ptr=p;   
    }
    return ptr;
}
s* secins(s*ptr)
{
     s*p=NULL;
    p=(s*)malloc(sizeof(s));
    if(p!=NULL)
    {
        printf("Enter the data \n");
        scanf("%d",&p->d);
        p->next=ptr->next;
        ptr->next=p;
}
return ptr;
}
s* newlast(s*ptr)
{
    s*p=NULL,*t=NULL;
    p=(s*)malloc(sizeof(s));
    if(p!=NULL)
    {
        printf("Enter the data \n");
        scanf("%d",&p->d);
        t=ptr;
        while(t->next!=NULL)
            t=t->next;
    t->next=p;
    p->next=NULL;
    }
    return ptr;
}
s* newbeflast(s*ptr)
{
     s*p=NULL,*t=NULL;
    p=(s*)malloc(sizeof(s));
    if(p!=NULL)
    {
        printf("Enter the data \n");
        scanf("%d",&p->d);
        t=ptr;
        while(t->next->next!=NULL)
            t=t->next;
    p->next=t->next;
    t->next=p;
    }
    return ptr;
}
s* newbefspecific(s*ptr)
{      int x;
    printf("enter data before which you want to input \n");
    scanf("%d",&x);
    s*p=NULL,*t=ptr;
    p=(s*)malloc(sizeof(s));
    if(p!=NULL)
    {
        printf("Enter the data \n");
        scanf("%d",&p->d);
        while((t->next)->d!=x)
            t=t->next;
        p->next=t->next;
    t->next=p;
    }
    return ptr;
}
s* newaftspecific(s*ptr)
{
     int x;
    printf("enter data after which you want to input \n");
    scanf("%d",&x);
    s*p=NULL,*t=ptr;
    p=(s*)malloc(sizeof(s));
    if(p!=NULL)
    {
        printf("Enter the data \n");
        scanf("%d",&p->d);
        while((t->next)->d!=x)
            t=t->next;
        t=t->next;
        p->next=t->next;
        t->next=p;
    }
    return ptr;
}
s* delsec(s*ptr)
{
    s*p=NULL;
    if (ptr == NULL)
        printf("empty \n");
    else {
    p=ptr->next;;
    ptr->next=p->next;
    printf("deleted element is %d \n",p->d);
    free(p);
    }
    return ptr;
}
s* dellast(s*ptr)
{
     s*p=NULL,*t=ptr;
    if (ptr == NULL)
    {
        printf("empty \n");
        return NULL;
    }
    if (ptr->next == NULL) { 
        printf("Deleted element is %d\n", ptr->d);
        free(ptr); 
        return NULL;
    }
    while(t->next->next!=NULL)
         t=t->next;
    p=t->next;
    printf("deleted element is %d \n",p->d);
    t->next=NULL;
    free(p);
    return ptr;
}
s* delseclast(s*ptr)
{
      s*p=NULL,*t=ptr;
      if (ptr == NULL)
        printf("empty \n");
    else 
    {
       while(t->next->next->next!=NULL)
            t=t->next;
        p=t->next;
        t->next=p->next;
          printf("deleted element is %d \n",p->d);
        free(p);
    }
    return ptr;
}
void disprev(s*ptr)
{
    if(ptr==NULL)
    return;
    disprev(ptr->next);
    printf("%d  ",ptr->d);
}
s* rev(s*ptr)
{
    s *prev=NULL,*current=NULL,*next=NULL;
    current=ptr;
    while(current!=NULL)
    {
          next=current->next;
          current->next=prev;
          prev=current;
          current=next;
    }   
    return prev;
}
