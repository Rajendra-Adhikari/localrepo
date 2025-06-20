//function used to read a file
//fgetc
//fgets
//fscanf
//fread










#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Writing to the file
    fp = fopen("example.txt", "w"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    fprintf(fp,"%d",7);
    fclose(fp);

    fp = fopen("example.txt", "r"); 
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    // while ((ch = fgetc(fp)) != EOF) { 
    //     printf("%c ", ch);
        
    // }
    printf("%c\t",fgetc(fp));
    printf("%c\t",fgetc(fp));
    printf("%c\t",fgetc(fp));
    fclose(fp);

    return 0;
}