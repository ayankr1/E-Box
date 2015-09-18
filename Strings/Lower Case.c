#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
  char s[100];
  int i;
  printf("Enter the input string\n");
  gets(s);
  for(i=0;s[i]!='\0';i++){
    if(isupper(s[i])!=0){
      s[i]=tolower(s[i]);
    }
  }
  printf("The output string is %s",s);
  return 0;
}
