#include<stdio.h>
#include<conio.h>
struct student{
    char name[20];
    int roll;
    float marks;//self referencial structure
    //a structure which has at least one member of type pointer to the same structutre 
}s;
int main(){
    // or,struct sudent s;
     struct student *sptr;//pointer declare of pointer to structure
     sptr=&s; //hold address by ptr reference operator 
     printf("enter name,roll and marks of yogesh:");
     gets(sptr->name);
     scanf("%d%f",&sptr->roll,&sptr->marks);//need ampersand because we give address
     printf("Name=%s\nroll=%d\nmarks=%f",sptr->name,sptr->roll,sptr->marks); //give data
     return 0;
}






