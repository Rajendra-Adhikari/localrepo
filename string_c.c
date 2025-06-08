//Rajendra Adhikari
//vowel cons
//concat
//dictionary
#include<stdio.h>
#include<string.h>
int main(){
    char str[15];
    printf("enter a string:\n");
    scanf("%[^\n]",str);
    int i=0,count1=0,count2=0;
    while(i<15){
        if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'){
            count1++;
        }
        else if (str[i]==' '){
            
        }
            
        else{
            count2++;
        }
        i++;
    }
 printf("\n no of vowels is %d",count1);
 printf("\n no of consonants is %d",count2);
 return 0;
}