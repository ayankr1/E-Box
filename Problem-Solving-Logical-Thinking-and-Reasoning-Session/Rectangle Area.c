#include<stdio.h>
int main()
{
int n,x,i,j,y;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
    {
      if(2*(i+j)<=n)
      {
        x=i;
        y=j;
      }
    }
  }
    printf("%d",x*y);
return 0;
}
