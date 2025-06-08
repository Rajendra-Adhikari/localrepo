
#include <stdio.h>
#include <string.h>

int main() {
    char str1[15], str2[15], str[31]; // Increased size for str
    printf("Enter first string:\n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string:\n");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    strcpy(str, str1);
    strcat(str, str2);

    printf("The concatenated string is: %s\n", str);
    return 0;
}