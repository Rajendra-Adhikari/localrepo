//sort array by using pointer
#include<stdio.h>
void sort_array (int*);
int main(){
    int n,i,j,arr[100];
    int *p=arr;

    printf("enter 10 number to sort:");
    for(i=0;i<10;i++){
        scanf("%d",p+i);
    }
    sort_array(p);
    return 0;

}
void sort_array(int*p){
        for(int i=0;i<10;i++){
            for(int j=0;j<9;j++){ 
                if(*(p+j)>*(p+j+1)){
                  int  temp = *(p+j);
                  *(p+j)=*(p+j+1);
                  *(p+j+1)=temp;

                }
            }
        }
        printf("sort array is:\n");
        for(int i=0;i<10;i++){
            printf("%d\t",*(p+i));
        }
    }
