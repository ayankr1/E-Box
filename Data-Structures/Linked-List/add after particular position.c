#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
                int data;
                struct node * link;
};
void append ( struct node **, int ) ;
void display ( struct node * ) ;
void addafter ( struct node *, int, int ) ;
int main() {
                struct node *p ;
                p=NULL;
                int n,l;
                char ch[10];
                do {
                              printf("Enter the value\n");
                               scanf("%d",&n);
                                append(&p,n);
                                printf("Do you want to append another node? Type Yes/No\n");
                                scanf("%s",ch);

                }while(!strcmp(ch,"Yes"));

                printf("The elements in the linked list are");

                display(p);

                printf("\n");

                do {
                                printf("Enter the position after which you want to add another node\n");
                                scanf("%d",&l);
                                printf("Enter the value\n");
                               scanf("%d",&n);
                               addafter(p,l,n);
                                printf("The elements in the linked list are");
                                display(p);
                                printf("\n");
                                printf("Do you want to add another node after a certain position? Type Yes/No\n");
                                scanf("%s",ch);
                }while(!strcmp(ch,"Yes"));
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
void addafter ( struct node *q, int loc, int num )
{
                // Fill in the code here
   int nc=0;
  struct node* new_node =(struct node*) malloc(sizeof(struct node));
  struct node * temp,*prev;
  temp=q;
     new_node->data  = num;
      while(q!=NULL)
    {
      q=q->link;
      nc++;
     }
  if(loc>nc)
  {
    printf("There are less than %d elements in the linked list\n",loc);
    return;
  }
  else
  {
  while(loc>=0)
  {
    prev=temp;
    temp=temp->link;
    loc--;
  }
  prev->link=new_node;
  new_node->link=temp;
  }
 return;
}
