#include<stdio.h>
int main()
{
 long int n;
  scanf("%ld",&n);
  if(n>1)
  {
    if(n%2==0 || n%3==0)
   printf("YES");
    else
      printf("NO");
  }
  if(n==1)
  {
    printf("NO");
  }
  return 0;
}
