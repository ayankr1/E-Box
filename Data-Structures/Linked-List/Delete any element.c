#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
                int data;
                struct node * link;
};
void append ( struct node **, int ) ;
void display ( struct node * ) ;
void delete (struct node **, int);
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
               } while(!strcmp(ch,"Yes"));
               printf("The elements in the linked list are");
                display(p);
               printf("\n");
              printf("Enter the element to be deleted\n");
             scanf("%d",&n);
            delete(&p,n);
            printf("The elements in the linked list after deleting the element are");
            display(p);
            printf("\n");
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
  
void delete ( struct node **pp, int num )
{
               // Fill in the code here
  struct node *q,*r,*temp;
    q=*pp;
    int i,count=0;
   r=q;
         if(!q)//If linked list is empty
            {
               printf("\n\t\tLinked list is EMPTY\n");
               return;
            }
            else//If linked list consists of more than one node
           {
                for(i=1;q;i++)
                {
                   if(q->data==num)
                    {
                        if(i==1)//for first node
                      {
                           q=q->link;
                            free(r);
                           *pp=q;
                           count=1;
                       }
                       else//for the rest of the nodes
                        {
                            r->link=q->link;
                           temp=q;
                           q=q->link;
                            free(temp);
                           count++;
                       }
                    }
                   else
                   {
                     r=q;
                   q=q->link;
                    }
                }
           }
            if(count==0)
            printf ( "Element %d not found\n", num ) ;
}
