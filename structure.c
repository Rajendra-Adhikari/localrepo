#include<stdio.h>
#include<conio.h>
struct student{
    char name[20];
    int roll;
    float marks;
}s[3];
void display(struct student s[]){
    printf("the dats of 10 student is:\n");
    for(int i=0;i<3;i++){
        printf("%s\t%d\t%f\n",s[i].name,s[i].roll,s[i].marks);
        
    }
}


int main(){
    int i;
    printf("enter name roll and marks of 10 student:\n");
    for( i=0;i<3;i++){
        fflush(stdin);
        gets(s[i].name);
        scanf("%d%f",&s[i].roll,&s[i].marks);
       
    }
    display(s);
    return 0;
}


