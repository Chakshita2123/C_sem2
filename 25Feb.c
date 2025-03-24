// 1. Write a program to make a pyramid of numbers.
// #include <stdio.h>
// int main() {
//     int rows, i, j, space;
//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);
//     for (i = 1; i <= rows; i++) {
//         for (space = 1; space <= rows - i; space++) {
//             printf("  ");
//         }
//         for (j = 1; j <= (2 * i - 1); j++) {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }    
//     return 0;
// }


// 2. display sum of n terms of a harmonic series
// #include <stdio.h>
// int main() {
//     int n, i;
//     double sum = 0.0;
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++) {
//         sum += 1.0 / i;
//     }
//     printf("Sum of %d terms of harmonic series: %.5lf\n", n, sum);
//     return 0;
// }


// 3. Display numbers in reverse order 
// #include <stdio.h>
// int main() {
//     int num, reversed = 0;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     while (num != 0) {
//         reversed = reversed * 10 + num % 10;
//         num /= 10;
//     }
//     printf("Reversed number: %d\n", reversed);
//     return 0;
// }


// 4. Find sum of all integers in a given range that are divisible by 9
// #include <stdio.h>
// int main() {
//     int start, end, sum = 0;
//     printf("Enter the start of the range: ");
//     scanf("%d", &start);
//     printf("Enter the end of the range: ");
//     scanf("%d", &end);
//     for (int i = start; i <= end; i++) {
//         if (i % 9 == 0) {
//             sum += i;
//         }
//     }
//     printf("Sum of numbers divisible by 9 in the range [%d, %d] is: %d\n", start, end, sum);
//     return 0;
// }


// 5. Cubes of number in a particular range
// #include <stdio.h>

// int main() {
//     int start, end;
//     printf("Enter the start of the range: ");
//     scanf("%d", &start);
//     printf("Enter the end of the range: ");
//     scanf("%d", &end);

//     printf("Cubes of numbers in the range [%d, %d]:\n", start, end);
//     for (int i = start; i <= end; i++) {
//         printf("%d^3 = %d\n", i, i * i * i);
//     } 
//     return 0;
// }  


// 6.display a natural with its square 