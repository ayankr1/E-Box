#include <stdio.h>    
#include <stdlib.h>   
struct node {   
int data ;    
struct node * link ;    
} ;   
void push ( struct node **, int ) ;   
int pop ( struct node **) ; 
void display ( struct node * ) ;      
void printMenu();   
int main() {    
struct node * p;      
p = NULL;   
int data,ch, data1;   
do {      
printMenu();    
printf("Enter your choice\n");  
scanf("%d",&ch);      
switch(ch) {    
case 1:   
printf("Enter the element to be pushed\n"); 
scanf("%d",&data);    
push(&p, data); 
break;    
case 2: 
data1 = pop(&p);      
if(data1 != -1000)  
printf("The popped element is %d\n",data1);   
break;  
case 3:   
printf("The contents of the stack are");    
display(p);   
printf("\n");   
break;    
default:    
return 0;     
}   
} while(1);   
return 0;   
}     
void printMenu() {    
printf("Choice 1 : Push\n");    
printf("Choice 2 : Pop\n");   
printf("Choice 3 : Display\n"); 
printf("Any other choice : Exit\n");      
}   
void push ( struct node **q, int num ) {    
struct node *temp=(struct node *)malloc(sizeof(struct node));     
temp->data=num;  
temp->link=*q;     
*q=temp;    
}     
void display ( struct node *q ) {   
struct node *p;   
if(q==NULL) 
{     
printf(" {}");  
}     
else    
{     
p=q;    
do    
{   
printf(" %d",p->data);     
p=p->link;   
}     
while(p!=NULL); 
}     
}   
int pop ( struct node **q ) {   
struct node *p;   
int data;   
if(*q==NULL)      
{   
data=-1000;   
printf("Stack is empty\n"); 
}     
else    
{     
p=*q;   
data=p->data;      
*q=p->link;  
free(p);      
}   
return data;      
}
