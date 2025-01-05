//To find character entered by user is upper case or lower case or any other character
#include <stdio.h>
int main(){
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z') {
        printf("upper case character\n");
       }
     else if (ch>='a' && ch<='z') {
        printf("Lower case character\n");
 }
        else{
            printf("Not english letter\n");
        }
        return 0;

}