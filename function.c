// C program to write 2 function one to print"Hello" and second to to print"Goodbye"
#include<stdio.h>
//declaration/protype
void printHello ();
void  printGoodbye();
 
 int main(){
    printHello(); //function call
    printGoodbye();
    return 0;
 }
 //function defination
 
 void printHello() {
    printf("Hello\n");
 }
 void printGoodbye() {
    printf("Goodbye");
 }
