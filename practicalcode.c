//Program 1
// #include <stdio.h>

// int main() {
    
//     int age;         
//     float height;    
//     double weight;   
//     char initial;    

//     printf("Enter your age: ");
//     scanf("%d", &age);

//     printf("Enter your height in meters: ");
//     scanf("%f", &height);

//     printf("Enter your weight in kg: ");
//     scanf("%lf", &weight);

//     printf("Enter the first letter of your name: ");
//     scanf(" %c", &initial); 

//     printf("\n--- User Information ---\n");
//     printf("Age: %d years\n", age);
//     printf("Height: %.2f meters\n", height);
//     printf("Weight: %.2lf kg\n", weight);
//     printf("Initial: %c\n", initial);

//     return 0;
// }


//Program 2
// #include <stdio.h>  // Standard input-output header file

// // Main function - Entry point of the program
// int main() {
//     // Variable declarations
//     int num1, num2, sum;

//     // Input: Taking two numbers from the user
//     printf("Enter first number: ");
//     scanf("%d", &num1);

//     printf("Enter second number: ");
//     scanf("%d", &num2);

//     // Process: Adding the two numbers
//     sum = num1 + num2;

//     // Output: Displaying the sum
//     printf("The sum of %d and %d is: %d\n", num1, num2, sum);

//     return 0;  // Indicates successful execution
// }



//Program 3
// #include <stdio.h>  // Standard input-output header file
// #define PI 3.14159   // Defining a constant for Pi

// // Main function - Entry point of the program
// int main() {
//     // Variable declaration
//     float radius, area, circumference;

//     // Input: Taking radius from the user
//     printf("Enter the radius of the circle: ");
//     scanf("%f", &radius);

//     // Process: Calculating area and circumference
//     area = PI * radius * radius;  // Area formula: πr²
//     circumference = 2 * PI * radius;  // Circumference formula: 2πr

//     // Output: Displaying the results
//     printf("Area of the circle: %.2f\n", area);
//     printf("Circumference of the circle: %.2f\n", circumference);

//     return 0;  // Indicates successful execution
// }



//Program 4
// #include <stdio.h>  // Standard input-output header file

// // Main function - Entry point of the program
// int main() {
//     // Variable declaration
//     float num1, num2, sum, difference, product, quotient;

//     // Input: Taking two numbers from the user
//     printf("Enter first number: ");
//     scanf("%f", &num1);

//     printf("Enter second number: ");
//     scanf("%f", &num2);

//     // Processing: Performing arithmetic operations
//     sum = num1 + num2;           // Addition
//     difference = num1 - num2;    // Subtraction
//     product = num1 * num2;       // Multiplication

//     // Handling division to avoid division by zero
//     if (num2 != 0)
//         quotient = num1 / num2;  // Division
//     else
//         quotient = 0;  // Default value when division is undefined

//     // Output: Displaying results
//     printf("\nResults:\n");
//     printf("Addition: %.2f\n", sum);
//     printf("Subtraction: %.2f\n", difference);
//     printf("Multiplication: %.2f\n", product);

//     // Display division result or error message
//     if (num2 != 0)
//         printf("Division: %.2f\n", quotient);
//     else
//         printf("Division: Undefined (cannot divide by zero)\n");

//     return 0;  // Indicates successful execution
// }



//Program 5
// #include <stdio.h>  // Standard input-output header file
// #include <math.h>   // For sqrt() function

// // Main function - Entry point of the program
// int main() {
//     // Variable declaration
//     float u, a, t, V, S;  // For equations (i) and (ii)
//     float b, c, T;        // For equation (iii)
//     float p, H;           // For equation (iv)

//     // Input for first two equations
//     printf("Enter initial velocity (u), acceleration (a), and time (t): ");
//     scanf("%f %f %f", &u, &a, &t);

//     // Calculation for V = u + at
//     V = u + (a * t);

//     // Calculation for S = ut + (1/2) * a * t^2
//     S = (u * t) + (0.5 * a * t * t);

//     // Input for equation (iii)
//     printf("Enter values for a, b, and c: ");
//     scanf("%f %f %f", &a, &b, &c);

//     // Calculation for T = 2 * a + sqrt(b) + 9 * c
//     T = 2 * a + sqrt(b) + (9 * c);

//     // Input for equation (iv)
//     printf("Enter values for b and p: ");
//     scanf("%f %f", &b, &p);

//     // Calculation for H = sqrt(b^2 + p^2)
//     H = sqrt((b * b) + (p * p));

//     // Output results
//     printf("\nResults:\n");
//     printf("V = %.2f\n", V);
//     printf("S = %.2f\n", S);
//     printf("T = %.2f\n", T);
//     printf("H = %.2f\n", H);

//     return 0;  // Indicates successful execution
// }



//Program 6
//6(a) 
// #include <stdio.h>  // Standard input-output header file

// // Main function
// int main() {
//     int a, b, temp;  // Variable declaration

//     // Input: Taking two numbers from the user
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     // Swapping using a temporary variable
//     temp = a;
//     a = b;
//     b = temp;

//     // Output after swapping
//     printf("\nAfter swapping:\n");
//     printf("a = %d, b = %d\n", a, b);

//     return 0;  // Successful execution
// }

//6(b)
// #include <stdio.h>  // Standard input-output header file

// // Main function
// int main() {
//     int a, b;  // Variable declaration

//     // Input: Taking two numbers from the user
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     // Swapping without using a temporary variable
//     a = a + b;
//     b = a - b;
//     a = a - b;

//     // Output after swapping
//     printf("\nAfter swapping:\n");
//     printf("a = %d, b = %d\n", a, b);

//     return 0;  // Successful execution
// }




//Program 7
//7(a)
// #include <stdio.h>  // Standard input-output header file

// // Main function
// int main() {
//     int a, b, c, greatest;

//     // Input: Taking three numbers from the user
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     // Using Conditional (Ternary) Operator to find the greatest number
//     greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

//     // Output the greatest number
//     printf("The greatest number is: %d\n", greatest);

//     return 0;  // Successful execution
// }

//7(b)
// #include <stdio.h>  // Standard input-output header file

// // Main function
// int main() {
//     int a, b, c;

//     // Input: Taking three numbers from the user
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     // Using if-else statements to find the greatest number
//     if (a > b && a > c) {
//         printf("The greatest number is: %d\n", a);
//     } else if (b > c) {
//         printf("The greatest number is: %d\n", b);
//     } else {
//         printf("The greatest number is: %d\n", c);
//     }

//     return 0;  // Successful execution
// }




//Program 8
// #include <stdio.h>  // Standard input-output header file

// // Main function
// int main() {
//     int n, sum = 0, i = 1;  // Variable declaration

//     // Input: Taking n from the user
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     // Using while loop to calculate the sum
//     while (i <= n) {
//         sum += i;  // Adding i to sum
//         i++;  // Incrementing i
//     }

//     // Output: Displaying the sum
//     printf("The sum of the first %d natural numbers is: %d\n", n, sum);

//     return 0;  // Successful execution
// }


//Program 9
// #include <stdio.h>  // Standard input-output header file
// #include <math.h>   // For pow() function

// // Main function
// int main() {
//     int num, originalNum, remainder, result = 0, n = 0, temp;

//     // Input: Taking a number from the user
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     originalNum = num;  // Storing the original number
//     temp = num;

//     // Counting the number of digits
//     while (temp != 0) {
//         temp /= 10;
//         n++;
//     }

//     // Using for loop to check Armstrong number
//     for (temp = num; temp != 0; temp /= 10) {
//         remainder = temp % 10;                    // Extract last digit
//         result += pow(remainder, n);              // Sum of digits raised to power n
//     }

//     // Output: Checking if the number is Armstrong
//     if (result == originalNum)
//         printf("%d is an Armstrong number.\n", num);
//     else
//         printf("%d is not an Armstrong number.\n", num);

//     return 0;  // Successful execution
// }



//Program 10
// #include <stdio.h>  // Standard input-output header file

// // Main function
// int main() {
//     int n, first = 0, second = 1, next, i;

//     // Input: Taking the number of terms from the user
//     printf("Enter the number of terms: ");
//     scanf("%d", &n);

//     printf("Fibonacci Series: ");

//     // Printing the first two terms
//     for (i = 1; i <= n; i++) {
//         printf("%d ", first);
//         next = first + second;  // Compute next term
//         first = second;         // Update first term
//         second = next;          // Update second term
//     }

//     printf("\n");  // New line for output formatting
//     return 0;  // Successful execution
// }


//Program 11
// #include <stdio.h>  // Standard input-output header file

// // Main function
// int main() {
//     int i, j, n, spaces;

//     // Input: Taking the number of rows from the user
//     printf("Enter the number of rows: ");
//     scanf("%d", &n);

//     // Loop for rows
//     for (i = 1; i <= n; i++) {
//         // Loop for spaces
//         for (spaces = 1; spaces <= n - i; spaces++) {
//             printf("  ");
//         }

//         // Loop for printing stars
//         for (j = 1; j <= i; j++) {
//             printf("* ");
//         }

//         printf("\n");  // Move to the next line
//     }

//     return 0;  // Successful execution
// }



//Program 12
//12(a)
// #include <stdio.h>

// int main() {
//     float u, a, t, V;

//     // Input values
//     printf("Enter initial velocity (u): ");
//     scanf("%f", &u);
//     printf("Enter acceleration (a): ");
//     scanf("%f", &a);
//     printf("Enter time (t): ");
//     scanf("%f", &t);

//     // Calculate final velocity
//     V = u + a * t;

//     // Output result
//     printf("Final velocity (V) = %.2f\n", V);
//     return 0;
// }

//12(b)
// #include <stdio.h>

// int main() {
//     float u, a, t, S;

//     // Input values
//     printf("Enter initial velocity (u): ");
//     scanf("%f", &u);
//     printf("Enter acceleration (a): ");
//     scanf("%f", &a);
//     printf("Enter time (t): ");
//     scanf("%f", &t);

//     // Calculate displacement
//     S = u * t + 0.5 * a * t * t;

//     // Output result
//     printf("Displacement (S) = %.2f\n", S);
//     return 0;
// }

//12(c)
// #include <stdio.h>
// #include <math.h>

// int main() {
//     float a, b, c, T;

//     // Input values
//     printf("Enter value of a: ");
//     scanf("%f", &a);
//     printf("Enter value of b: ");
//     scanf("%f", &b);
//     printf("Enter value of c: ");
//     scanf("%f", &c);

//     // Calculate T
//     T = 2 * a + sqrt(b + 9 * c);

//     // Output result
//     printf("Result (T) = %.2f\n", T);
//     return 0;
// }

//12(d)
// #include <stdio.h>
// #include <math.h>

// int main() {
//     float b, p, H;

//     // Input values
//     printf("Enter value of b: ");
//     scanf("%f", &b);
//     printf("Enter value of p: ");
//     scanf("%f", &p);

//     // Calculate H
//     H = sqrt(b * b + p * p);

//     // Output result
//     printf("Result (H) = %.2f\n", H);
//     return 0;
// }


#include <stdio.h>  
#include <math.h>  
int main() {
    int num, originalNum, remainder, result = 0, n = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  
    temp = num;

    while (temp != 0) {
        temp /= 10;
        n++;
    }

    for (temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;                    
        result += pow(remainder, n);              
    }

    if (result == originalNum)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;  
}

