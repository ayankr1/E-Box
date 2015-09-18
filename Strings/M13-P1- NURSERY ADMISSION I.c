#include<stdio.h>
#include<string.h>
int main(){
  char s[100];
  printf("Enter the name\n");
  gets(s);
  printf("The number of letters in the name is %d",strlen(s));
  return 0;
}
