#include<stdio.h>
#include<stdlib.h>
int main(){
    int *p,i;
    printf("%d",sizeof(int));
    p=(int*)malloc(5*sizeof(int));
    printf("enter any five numbers:");
    for(i=0;i<5;i++){
        scanf("%d",p+i);
    }
    p=(int*)realloc(p,8*sizeof(int));
    printf("enter next 3 numbers:");
    for(i=5;i<8;i++){
        scanf("%d",p+i);
    }
   printf("the numbers are:");
    for(i=0;i<8;i++){
    printf("%d\t",*(p+i));
   }
 free(p);
 return 0;
}
/*
realloc(pointer_name,new-sizeof(datatype));
ptr= datatype*calloc(no_of-blocks,sizeof(datatype)))(5,20)
ptr =datatype* malloc(sizeof(datatype))
*/
//  A B C D E