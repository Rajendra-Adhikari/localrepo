#include<stdio.h>
int main(){
    int A[10][10],B[10][10],C[10][10],r1,r2,c1,c2,i,j,sum=0;
    printf("enter size(row and col) of matrix A:");
    scanf("%d%d",&r1,&c1);
    printf("enter size(row and col) of matrix B:");
    scanf("%d%d",&r2,&c2);
    if(c1==r2){
   printf("enter element of matrix A:\n");
   for(i=0;i<r1;i++){
    for(j=0;j<c1;j++){
        scanf("%d",&A[i][j]);
    }
    }
   printf("enter element of matrix B:\n");
   for(i=0;i<r2;i++){
    for(j=0;j<c2;j++){
        scanf("%d",&B[i][j]);
    }
    }
    int k;
  for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        for( k=0;k<c1;k++){
            sum=sum+A[i][k]*B[k][j];
            C[i][j]=sum;
        }
    }
  }
printf("the matrix multiplication is :\n");
for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
        printf("%d\t",C[i][j]);
    }
    printf("\n");
}
   

 }
  else
    printf("matrix can not multiplied");
  
 return 0;
 }