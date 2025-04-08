// sum of digits of a number
// #include <stdio.h>
// int sum_of_digits(int n) {
//     int sum = 0;
//     while (n > 0) {
//         sum += n % 10;
//         n /= 10;
//     }
//     return sum;
// }
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     int result = sum_of_digits(num);
//     printf("Sum of digits of %d is %d\n", num, result);
//     return 0;
// }


// multiplication of 2D arrays
// #include <stdio.h>

// int main() {
//     int mat1[10][10], mat2[10][10], result[10][10];
//     int r1, c1, r2, c2;
//     printf("Enter rows and columns for first matrix: ");
//     scanf("%d%d", &r1, &c1);

//     printf("Enter rows and columns for second matrix: ");
//     scanf("%d%d", &r2, &c2);
//     if (c1 != r2) {
//         printf("Matrix multiplication not possible!\n");
//         return 0;
//     }
//     printf("Enter elements of first matrix:\n");
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c1; ++j) {
//             printf("mat1[%d][%d]: ", i, j);
//             scanf("%d", &mat1[i][j]);
//         }
//     }
//     printf("Enter elements of second matrix:\n");
//     for (int i = 0; i < r2; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             printf("mat2[%d][%d]: ", i, j);
//             scanf("%d", &mat2[i][j]);
//         }
//     }
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             result[i][j] = 0;
//         }
//     }
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             for (int k = 0; k < c1; ++k) {
//                 result[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }
//     printf("Resultant matrix:\n");
//     for (int i = 0; i < r1; ++i) {
//         for (int j = 0; j < c2; ++j) {
//             printf("%d\t", result[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// transpose of a matrix
// #include <stdio.h>

// int main() {
//     int matrix[10][10], transpose[10][10];
//     int rows, cols;

//     printf("Enter rows and columns of the matrix: ");
//     scanf("%d%d", &rows, &cols);

//     printf("Enter elements of the matrix:\n");
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             printf("matrix[%d][%d]: ", i, j);
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }

//     printf("\nOriginal Matrix:\n");
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             printf("%d\t", matrix[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nTransposed Matrix:\n");
//     for (int i = 0; i < cols; ++i) {
//         for (int j = 0; j < rows; ++j) {
//             printf("%d\t", transpose[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }


// factorial of a number using recursion
// #include <stdio.h>
// int factorial(int n) {
//     if (n == 0 || n == 1)
//         return 1; // Base case
//     else
//         return n * factorial(n - 1); // Recursive call
// }

// int main() {
//     int num;

//     printf("Enter a number to find its factorial: ");
//     scanf("%d", &num);

//     if (num < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//     } else {
//         printf("Factorial of %d is %d\n", num, factorial(num));
//     }

//     return 0;
// }
