    #include<stdio.h>
int main()
{
  int i, value, num,sum1=0,sum2=0;
  scanf("%d",&num);
  value=num;
  while(value!=0)
  {
      i=value%10;
      value/=10;
    if(i%2==0)
    {
      sum1+=i;
    }
    else
    {
      sum2+=i;
    }    
  }
  if(sum1==sum2)
  {
    printf("\nyes");
  }
  else
  {
    printf("\nno");
  }
  return 0;
} 
