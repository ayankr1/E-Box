#include <stdio.h>
#include <stdlib.h>
    struct node
    {
        int data ;
        struct node * link ;
    } ;
   void addcirq ( struct node **, struct node **, int ) ;
   int delcirq(struct node **,struct node **);
    void cirq_display ( struct node * ) ;
    void printMenu();
    int main()
    {
        struct node *front = NULL, *rear = NULL ;
        int data,ch, data1;
        do {
        printMenu();
        printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch) {
          case 1:
          printf("Enter the element to be inserted/entered\n");
           scanf("%d",&data);
            addcirq(&front,&rear,data);
           break;
         case 2:
          data1 = delcirq(&front,&rear);
           if(data1 != -1000)
            printf("The deleted element is %d\n",data1);
           break;
         case 3:
           printf("The contents of the queue are");
           cirq_display ( front ) ;
           printf("\n");
           break;
         default:
          return 0;
        }
       } while(1);
        return 0;
    }
   void printMenu()
    {
        printf("Choice 1 : Enter element into Queue\n");
       printf("Choice 2 : Delete element from Queue\n");
        printf("Choice 3 : Display\n");
       printf("Any other choice : Exit\n");
   }
    /* adds a new element at the end of queue */
    void addcirq ( struct node **f, struct node **r, int item )
  {
      struct node *q;
      q=(struct node *)malloc(sizeof(struct node));
      q->data=item;
      if(*f==NULL)
        *f=q;
     else
        (*r)->link=q;
      *r=q;
      (*r)->link=*f;
   }
    /* removes an element from front of queue */
    int delcirq ( struct node **f, struct node **r )
   {
        struct node *q;
        int item;
      if(*f==NULL)
        printf("Queue is empty\n");
     else
      {
        if(*f==*r)
        {
         item=(*f)->data;
         free(*f);
        *f=NULL;
        *r=NULL;
       }
    else
       {
         q=*f;
         item=q->data;
         *f=(*f)->link;
          (*r)->link=*f;
         free(q);
       }
       return item;
     }
     return -1000;
     }
    /* displays whole of the queue */
    void cirq_display ( struct node *f )
    {
      struct node *q=f,*p=NULL;
      if(f==NULL)
      {
        printf(" {}");
       return;
      }
     while(q!=p)
     {
        printf(" %d",q->data);
        q=q->link;
        p=f;
      }
   }
