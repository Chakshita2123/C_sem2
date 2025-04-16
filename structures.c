// #include <stdio.h>
// struct class
// {
//     int rollno;
//     char name[20];
//     float marks;
// };
// int main()
// {
//     struct class s1 = {1, "John", 90.5};
//     printf("Roll No: %d\n", s1.rollno);
//     printf("Name: %s\n", s1.name);
//     printf("Marks: %.2f\n", s1.marks);
// }


#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float marks;
}; // ← Note the semicolon here

int main() {
    struct student stud[50];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter roll number of student %d: ", i + 1);
        scanf("%d", &stud[i].roll);

        printf("Enter name of student %d: ", i + 1);
        scanf("%s", stud[i].name); // no & before stud[i].name

        printf("Enter marks of student %d: ", i + 1);
        scanf("%f", &stud[i].marks);
    }

    printf("\n--- Student Details ---\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll number: %d\n", stud[i].roll); // Fixed incorrect syntax stud[i.roll]
        printf("Name: %s\n", stud[i].name);
        printf("Marks: %.2f\n", stud[i].marks);
    }

    return 0;
}