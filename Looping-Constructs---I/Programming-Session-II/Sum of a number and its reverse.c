   #include<stdio.h>
int main()
{
  int num,n,rev,i,count=1;
  scanf("%d",&n);
  num=n;
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
  printf("\n%d",n+rev);
  return 0;
}
