#include<stdio.h>
#include<stdlib.h>

int findMax(int **a, int m, int n){
  int i,j,max=-9999;
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      if(max<=a[i][j]){
        max=a[i][j];
      }
    }
  }
  return max;
}
int main(){
  int m,n,**a;
  //int **s;
  int i,j;
  printf("Enter the number of rows in the matrix\n");
  scanf("%d",&n);
  a=(int **)malloc(sizeof(int *)*n);
  printf("Enter the number of columns in the matrix\n");
  scanf("%d",&m);
  
  printf("Enter the elements in the matrix\n");
  for(i=0;i<n;i++){
    *(a+i)=(int *)malloc(sizeof(int)*m);
    for(j=0;j<m;j++){
      scanf("%d",&a[i][j]);
    }
  }
  //s=&a[0][0];
  printf("The matrix is\n");
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  printf("The maximum element in the matrix is %d",findMax(a,n,m));
  return 0;
}
