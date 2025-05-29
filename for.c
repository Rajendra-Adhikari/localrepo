//To find the greatest number of array
#include<stdio.h>
int greatest (int[] );
int main(){
    
    int A[5] = {1,2,3,4,5};
                 
    
   int Great =  greatest(A);
   printf("greatest number in array is%d",Great);
       
}

int greatest(int A[5]){
    int max=A[0];
    for(int i=0;i<5;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    return max;
}