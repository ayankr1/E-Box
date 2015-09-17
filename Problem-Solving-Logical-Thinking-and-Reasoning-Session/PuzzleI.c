#include<stdio.h>
int main()
{
int m,n;
  scanf("%d%d",&m,&n);
if(m==0||n==0)
{
printf("0");
}
if((m>0 && m<=10000000) && (n>0 && n<=10000000))
{ 
printf("%d\n",1+(m>>1)+(n>>1));
}    
return 0;
}
