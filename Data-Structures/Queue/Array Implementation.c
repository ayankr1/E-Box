#include<stdio.h>
#include<string.h>
struct queue {
  int contents[5];
  int front;
  int count;
} ;
void initQueue(struct queue * q);
void enQueue(struct queue * q, int element);
int deQueue(struct queue * q);
void display( struct queue q);
void printMenu();
    int main()
   {
        struct queue p;
       int data,ch, data1;
        initQueue(&p);
        do {
       printMenu();  
       printf("Enter your choice\n");
        scanf("%d",&ch);
        switch(ch) {
        case 1:
       printf("Enter the element to be inserted/entered\n");
        scanf("%d",&data);
         enQueue(&p, data);
           break;
         case 2:
           data1 = deQueue(&p);
         if(data1 != -1000)
           printf("The deleted element is %d\n",data1);
           break;
         case 3:
       printf("The contents of the queue are");
          display(p);
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
   void initQueue(struct queue * q)
    {
     q->front=0;
     q->count=0;
   }
      
   void enQueue(struct queue * q, int element)
    {
      if(q->count==5)
      {
       printf("Queue is full\n");
      return;
    }
      q->contents[(q->front+q->count)%5]=element;
     q->count++;
    }

   int deQueue(struct queue * q)
   {
     int data;
    if(q->count==0)
     {
       printf("Queue is empty\n");
       return -1000;
     }
        data=q->contents[q->front];
       q->front=(q->front+1)%5;
       q->count--;
       if(q->count==0)
       q->front=0;
       return data;
     }
   void display( struct queue q)
   {
   int i;
  if(q.count==0)
     {
        printf(" {}");
       return;
     }
     if(q.count!=5)
     { for(i=q.front;i!=(q.front+q.count)%5;i=(i+1)%5)
       printf(" %d",q.contents[i]);}
       else
       {
          for(i=q.front;i<5;i++)
         printf(" %d",q.contents[i]);
         for(i=0;i<q.front;i++)
         printf(" %d",q.contents[i]);
      }
   }
