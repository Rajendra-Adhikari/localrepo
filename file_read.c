#include <stdio.h>

struct student {
    char name[30];
    int roll;
    float cgpa;
};

int main() {
    FILE* fptr;
    struct student s;

    fptr = fopen("student.dat", "rb");
    if (fptr == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    printf("Reading student data:\n");
    while (fread(&s, sizeof(struct student), 1, fptr) == 1) {
        printf("Name: %s | Roll: %d | CGPA: %.2f\n", s.name, s.roll, s.cgpa);
    }

    printf("Data read from file successfully.\n");
    fclose(fptr);
    return 0;
}
