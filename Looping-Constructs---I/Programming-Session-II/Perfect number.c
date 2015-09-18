 #include<stdio.h>
int main()
{
  int num, fact=0,n=1;
  scanf("%d",&num);
  while(n<num)
  {
    if(num%n ==0)
    {
      fact+=n;
    }
    n++;
  }
  if(fact==num)
  {
    printf("Perfect number");
  }
  else
  {
    printf("Not a perfect number");
  }
  return 0;
}
