#include<stdio.h>
#include<conio.h>
struct student{
    char name[20];
    int roll;
    float marks;
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
//used arrow operator  -> symbol for acesssing data ( minus greaterthan);
//kasari vairaxa yad gara bro according to yogesh hackerrrrr

