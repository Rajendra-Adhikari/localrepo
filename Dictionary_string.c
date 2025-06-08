#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[50][50];
    int n,i;
    
    printf("enter no of string to arrange\n");
    scanf("%d",&n);
    printf("enter all strings:");
    for(i=0;i<n;i++){
        scanf("%s",str+i);
    }
    char temp[50];
    for(i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(strcmp(str[j],str[j+1])>0){
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);
            }
        }
    }
    printf("strings in dictionary order \n");
    for(i=0;i<n;i++){
        puts(str[i]);
    }
}
