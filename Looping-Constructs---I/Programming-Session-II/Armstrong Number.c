#include<stdio.h>
#include<math.h>
int main()
{
  int arm=0, x, num,org;
  scanf("%d",&org);
  num=org;
  while(num>0)
  {
    x=num%10;
    num/=10;
    arm+=pow(x,3);
  }
  if(org==arm)
  {
    printf("Armstrong Number");
  }
   else
   {
     printf("Not An Armstrong Number");
   }
  return 0;
}
