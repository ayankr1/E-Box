#include<stdio.h>
#include<string.h>
int main(){
  char s[100];
  const char s1[11]="aAeEiIoOuU";
  char *s2;
  printf("Enter the input string\n");
  gets(s);
  printf("The output string is ");
  s2=strtok(s,s1);
  while(s2!=NULL){
    printf("%s",s2);
    s2=strtok(NULL,s1);
  }
  return 0;
}
