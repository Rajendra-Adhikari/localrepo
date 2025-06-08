#include<stdio.h>
int main(){
    int A[5]={1,2,3,4,5},B[5]={1,5,4,3,2};
    int C[5];
    int *ptr1=A;
    int *ptr2 =B;
    int *ptr =C;
    for(int i=0;i<5;i++){
        *(ptr+i)=*(ptr1+i)+*(ptr2+i);
    }
    for(int i=0;i<5;i++){
        printf("%d\t",C[i]);
    }
    

}