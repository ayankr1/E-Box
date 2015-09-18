  #include<stdio.h>
int main()
{
  int i, value, num,sum=0;
  printf("Enter the value :");
  scanf("%d",&num);
  value=num;
  while(value!=0)
  {
    i=value%10;
    value/=10;
    sum+=i;
  }
  printf("\nSum of digits in %d is %d",num,sum);
  return 0;
} 
