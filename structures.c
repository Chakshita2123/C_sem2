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


// #include <stdio.h>

// struct student {
//     int roll;
//     char name[50];
//     float marks;
// }; // ← Note the semicolon here

// int main() {
//     struct student stud[50];
//     int n, i;

//     printf("Enter the number of students: ");
//     scanf("%d", &n);

//     for (i = 0; i < n; i++) {
//         printf("\nEnter roll number of student %d: ", i + 1);
//         scanf("%d", &stud[i].roll);

//         printf("Enter name of student %d: ", i + 1);
//         scanf("%s", stud[i].name); // no & before stud[i].name

//         printf("Enter marks of student %d: ", i + 1);
//         scanf("%f", &stud[i].marks);
//     }

//     printf("\n--- Student Details ---\n");
//     for (i = 0; i < n; i++) {
//         printf("\nStudent %d:\n", i + 1);
//         printf("Roll number: %d\n", stud[i].roll); // Fixed incorrect syntax stud[i.roll]
//         printf("Name: %s\n", stud[i].name);
//         printf("Marks: %.2f\n", stud[i].marks);
//     }

//     return 0;
// }

// copy the contents of one structure to another
// #include <stdio.h>
// #include <string.h>
// struct student {
//     int roll;
//     char name[50];
//     float marks;
// };
// struct student stud2;
// struct student stud1 = {1, "John Doe", 85.5};

// int main() {
//     stud2 = stud1;
//     printf("Roll: %d\n", stud2.roll);
//     printf("Name: %s\n", stud2.name);
//     printf("Marks: %.2f\n", stud2.marks);
//     return 0;
// }

// define a structure vehicle in which u have to mention vehicle number , its model (for car jeep and taxi / for all three) and per day rental. calculate the total rental cost separattely for specific number of days and display the results
// #include <stdio.h>
// struct vehicle {
//     char vno[20];
//     char model[20];
//     float rental;
// };
// int main() {
//     struct vehicle v;
//     int days,n;
//     float total_rental;
//     printf("Enter number of vehicles: ");
//     scanf("%d", &n);
//     for(int i = 0; i < n; i++) {
//         printf("Enter vehicle number: ");
//         scanf("%s", v.vno);
//         printf("Enter model: ");
//         scanf("%s", v.model);
//         printf("Enter per day rental: ");
//         scanf("%f", &v.rental);
//     }
//     printf("Enter number of days: ");
//     scanf("%d", &days);
//     total_rental = v.rental * days;
//     printf("Vehicle Number: %s\n", v.vno);
//     printf("Model: %s\n", v.model);
//     printf("Total Rental Cost for %d days: %.2f\n", days, total_rental);
//     return 0;
// }

