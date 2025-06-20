#include <stdio.h>

struct student {
    char name[30];
    int roll;
    float cgpa;
};

int main() {
    FILE *fptr;
    int n;

    printf("Size of one student struct = %ld bytes\n", sizeof(struct student));

    printf("Enter how many students you want to input: ");
    scanf("%d", &n);

    struct student arr[n];

    printf("Enter student data (name roll cgpa):\n");
    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", arr[i].name, &arr[i].roll, &arr[i].cgpa);
    }

    fptr = fopen("student.dat", "wb");
    if (fptr == NULL) {
        printf("File cannot be opened.\n");
        return 1;
    }

    fwrite(arr, sizeof(struct student), n, fptr);
    printf("Data written to file successfully.\n");

    fclose(fptr);
    return 0;
}
