#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int sum=0;
    for (int i=1; i<=n; i=i+1){
        sum=sum+i;

    }
    printf("sum is %d\n",sum);
   for (int i=n;i>=1;i--){
        printf("%d\n",i);
   }
    return 0;
}
//or in shortcut
// for(int i=1;j=n; i<=n && j>=1; i++,j--){
//}
// can also be remove because if we took sum o to input n or n to 0(reverse) it is same
//so for(int j=n;j>=1;j--){
// }
// sum =sum +j; and printF("%d",sum);