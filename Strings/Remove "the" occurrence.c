#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char a[500],*s;
  const char buffer[2]=" ";
  
  printf("Enter the string\n");
  scanf("%[^\n]",a);
  //gets(a);
  a[strlen(a)]='\0';
  printf("Result string is\n");
  
  s=strtok(a,buffer);
  while(s!=NULL){
    if(strcmp(s,"the")!=0){
      printf("%s ",s);
    }
    s=strtok(NULL,buffer);
  }
  
  return 0;
}
