//returning stucture after user input fronm defn to main func
#include<stdio.h>

#include<conio.h>
struct student{
    char name[20];
    int marks;
}s;

struct student input(){
    printf("enter name and marks:\n");
gets(s.name);
scanf("%d",&s.marks);
return s;
}

int main(){

s=input();
printf("the name and marks is %s\t%d\n",s.name,s.marks);
return 0;
}