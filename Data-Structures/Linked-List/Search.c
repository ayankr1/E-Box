#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
                int data;
                struct node * link;
};
void append ( struct node **, int ) ;
void display ( struct node * ) ;
int search (struct node *, int);
int main() {
                struct node *p ;
                p=NULL;
               int n,ele;
               char ch[10];
                do {
                          printf("Enter the value\n");
                                scanf("%d",&n);
                               append(&p,n);
                               printf("Do you want to add another node? Type Yes/No\n");
                               scanf("%s",ch);
               }while(!strcmp(ch,"Yes"));
                printf("The elements in the linked list are");
               display(p);
                printf("\n");
                printf("Enter the element to be searched\n");
               scanf("%d",&ele);
                if(search(p,ele))
                 printf("%d is present in the linked list\n",ele);
               else
                printf("%d is not present in the linked list\n",ele);
               return 0;
}
void append ( struct node **q, int num )
{
                // Fill in the code here
  struct node* new_node = (struct node*) malloc(sizeof(struct node));   
  struct node *head = *q;  /* used in step 5*/  
  new_node->data  = num; 
  new_node->link = NULL;  
       if (*q == NULL) 
       {    
          *q = new_node;
         return;  
       }      
     while (head->link != NULL)  
     head = head->link;   
     head->link = new_node;
      return;
}

void display ( struct node *q )
{
                // Fill in the code here
  while(q!=NULL)
    {
      printf(" %d",q->data);
      q=q->link;
    }
}
int search ( struct node *q, int e )
{
                // Fill in the code here
  int c=0;
  while(q!=NULL)
    {
      if(q->data==e)
        c++;
      q=q->link;
    }
  if(c>0)
   return 1;
  else
  return 0;
}
