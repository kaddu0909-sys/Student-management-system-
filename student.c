#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    while (1) {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Name: ");
                scanf("%s", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student Added Successfully!\n");
                break;

            case 2:
                printf("\nStudent Records:\n");
                for (i = 0; i < n; i++) {
                    printf("Roll: %d\tName: %s\tMarks: %.2f\n",
                           s[i].roll, s[i].name, s[i].marks);
                }
                break;

            case 3:
                found = 0;
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                for (i = 0; i < n; i++) {
                    if (s[i].roll == roll) {
                        printf("Record Found:\n");
                        printf("Roll: %d\nName: %s\nMarks: %.2f\n",
                               s[i].roll, s[i].name, s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Record Not Found!\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
