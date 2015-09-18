#include<stdio.h>
int main()
{
  int num,rev,i,count=1;
  printf("Enter the number :");
  scanf("%d",&num);
  while(num>0)
  {
    i=num%10;
    num/=10;
    if(count++==1)
    {
      rev=i;
    }
    else
    {
      rev=(rev*10)+i;
    }
  }
  printf("\nReverse of the number is %d",rev);
  return 0;
}
