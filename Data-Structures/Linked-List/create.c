 #include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
                int data;
                struct node * link;
};
void append ( struct node **, int ) ;
void display ( struct node * ) ;
int count ( struct node * ) ;
int main() {
               struct node *p ;
               p=NULL;
                int n;
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
                printf("The number of elements in the linked list is %d\n",count(p));
                return 0;
}
void append ( struct node **q, int num )
{
                //Fill in the code here
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
                //Fill in the code here
  while(q!=NULL)
    {
      printf(" %d",q->data);
      q=q->link;
    }
}
int count ( struct node * q )
{
                //Fill in the code here
  int c=0;
 while(q!=NULL)
    {
      c++;
      q=q->link;
    }
  return c;
}
