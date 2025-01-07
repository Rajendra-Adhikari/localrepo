//to print the table of a number given by user 9(i is vary as 1234 are vary in multiply or table of any number)
#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    for (int i=1; i<=10; i++){
        printf("%d \n",n*i);
    }
    return 0;
}