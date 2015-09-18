  #include<stdio.h>

int findMax(int n, int *a)
{
  int i,max;
  max=a[0];
  for(i=0;i<n;i++)
  {
    if (a[i] >max)
    {
      max=a[i];
    }
  }
  return max;  
}

int main()
{
  int n,i,a[40];
  printf("Enter the number of elements in the array");
  scanf("%d",&n);
  printf("\nEnter the elements in the array");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nThe maximum element in the array is %d",findMax(n, a));
  return 0;
}
