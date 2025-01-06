//using do while loop in c
#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int i=0;
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);
    return 0;
    
}
//i++ is same as i=i+1