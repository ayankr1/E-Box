#include<stdio.h>
#include<string.h>
int main(){
  char s[100];
  static int a[127];
  int i;
  printf("Enter the input string\n");
  gets(s);
  printf("The letter frequency is\n");
  for(i=0;s[i]!='\0';i++){
    a[(int)s[i]]++;
  }
  for(i=0;i<127;i++){
    if(a[i]!=0){
      printf("%c %d\n",i,a[i]);
    }
  }
  return 0;
}
