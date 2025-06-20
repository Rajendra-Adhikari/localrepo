#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    int hack;
    char str[10];
    fp=fopen("example.txt","r");
    if(fp==NULL){
        printf("FILE CANNOT OPENED");
        return 1;
    }
    fscanf(fp,"%s%d",str,&hack);
    printf("%s\t%d",str,hack);
   //printf("%s",fgets(str,3,fp));//remember fgets take 3 parameter/arguments(actual para)
   return 0;

}