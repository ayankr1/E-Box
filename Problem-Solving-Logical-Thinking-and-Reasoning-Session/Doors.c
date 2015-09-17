#include<stdio.h>
int main()
{
  int n,j,i,a[100000]={0},c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      for(j=1;i*j<=n;j++)
      {
        a[i*j]=a[i*j]+1;
      }
       }
  for(i=1;i<=n;i++)
    {
    if(a[i]%2!=0)
    {
      c++;
    }
    }
      printf("%d",c);
  return 0;
}
