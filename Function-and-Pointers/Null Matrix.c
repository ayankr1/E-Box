 #include<stdio.h>
#include<stdlib.h>
int checkNull(int **a, int m, int n){
  int i,j;
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      if(a[i][j]!=0){
        return 0;
      }
    }
  }
  return 1;
}
int main(){
  int **a,i,j,m,n;
  printf("Enter the number of rows in the matrix\n");
  scanf("%d",&m);
  printf("Enter the number of columns in the matrix\n");
  scanf("%d",&n);
  a=(int **)malloc(sizeof(int *)*m);
  printf("Enter the elements in the matrix\n");
  for(i=0;i<m;i++){
    a[i]=(int *)malloc(sizeof(int)*n);
    for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("The matrix is\n");
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      printf("%d ",a[i][j]); 
    }
    printf("\n");
  }
         if(checkNull(a,m,n)==1){
           printf("The matrix is null");
         }else{
           printf("The matrix is not null");
         }
  return 0;
}
