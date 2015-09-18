#include<stdio.h>
#include<string.h>
int main(){
  char s[100],a[100];
  int i,f=0;
  printf("Enter the actual word\n");
  gets(s);
  printf("Enter the word the student has typed\n");
  gets(a);
  if(strlen(a)!=strlen(s)){
    printf("It is wrong");
  }else{
    for(i=0;s[i]!='\0';i++){
      if(s[i]!=a[strlen(a)-1-i]){
        f=1;
        break;
      }
    }
    if(f==0){
      printf("It is correct");
    }else{
      printf("It is wrong");
    }
  }
  
  return 0;
}
