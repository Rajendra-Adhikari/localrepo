//print all number from 1 to 10 except 6
#include<stdio.h>
int main(){
    for (int i=0; i<=10; i++) {
        if (i==6) {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;

}