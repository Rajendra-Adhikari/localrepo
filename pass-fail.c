//write a program to check if a student is passed or failed
#include<stdio.h>
int main(){
    int marks;
    printf("enter number(0 to 100):");
    scanf("%d",&marks);
    if(marks <= 35){
        printf("Fail\n");
    }
    else if( marks >30 && marks <=100){
        printf("pass\n");
    }
    else{
        printf("wrong marks");
    }

}