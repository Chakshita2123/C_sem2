// RECURSION - The process of calling a function itself
// recursion continues until some condition is met to prevent it.
// eg - factorial , addition of n numbers


//Types of Recursions:
// 1. Direct Recursion - function calls itself direct within the body
// 2. Indirect Recursion - function calls another function, which in turn calls the original function


// 1. sum of 10 numbers using recursion [pre defined input]
// #include <stdio.h>
// int sum(int n) {
//     if(n==0) {
//         return 0;
//     }
//     return n + sum(n-1);
// }
// int main() {
//     int n=10;
//     printf("The sum of first %d numbers is %d\n",n,sum(n));
//     return 0;
// }


// 2. Sum of 10 numbers via recursion [input from user]
// #include <stdio.h>
// int sum(int n) {
//     if(n==0) {
//         return 0;
//     }
//     return n + sum(n-1);
// }
// int main() {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     printf("The sum of first %d numbers is %d\n",n,sum(n));
//     return 0;
// }


// 3. Factorial of a number using recursion
// #include <stdio.h>
// int factorial (int n);
// int main() {
//     int n,f;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     f = fact(n);
//     printf("Factorial = %d\n",f);
// }
// int fact(int n) {
//     if (n==0 || n==1) {
//         return 1;
//     }
//     else {
//         return n * fact(n-1);
//     } 
// }


// 4. Fibonacci series using recursion
// #include <stdio.h>
// int fib(int n) {
//     if(n==0) {
//         return 0;
//     }
//     else if(n==1) {
//         return 1;
//     }
//     else {
//         return fib(n-1) + fib(n-2);
//     }
// }
// int main() {
//     int n,i;
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);
//     printf("Fibonacci series: ");
//     for(i=0;i<n;i++) {
//         printf("%d ",fib(i));
//     }
//     return 0;
// }


// 5. GCD of two numbers using recursion
// #include <stdio.h>
// int gcd(int a, int b) {
//     if(b!=0) {
//         return gcd(b,a%b);
//     }
//     else {
//         return a;
//     }
// }
// int main() {
//     int a,b;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);
//     printf("GCD of %d and %d is %d\n",a,b,gcd(a,b));
//     return 0;
// }



//ADVANTAGES OF RECURSION
// 1. reduce unnecessary calling of functions
// 2.extremely useful when applying the same solution
// 3. very useful for data structures like trees and graphs

//DISADVANTAGES OF RECURSION
// 1. slow
// 2. large stack space
// 3. difficult to debug
// 4. difficult to understand
// 5. difficult to trace the flow of the program


// 6. program to find the sum of the digits of a number using recursion
// #include <stdio.h>
// int sum_of_digits(int n) {
//     if(n==0) {
//         return 0;
//     }
//     return n%10 + sum_of_digits(n/10);
// }
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     int result = sum_of_digits(n);
//     printf("The sum of the digits of %d is %d\n",n,sum_of_digits(n));
//     return 0;
// }


// 7. program to reverse an array without recursion
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of the array: ");
//     for(int i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     printf("The original array is: ");
//     for(int i=0;i<n;i++) {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     printf("The reversed array is: ");
//     for(int i=n-1;i>=0;i--) {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


// 8. program to reverse an array using recursion
// #include <stdio.h>
// void reverse_array(int arr[], int start, int end) {
//     int temp;
//     if(start>=end) {
//         return;
//     }
//     temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;
//     reverse_array(arr,start+1,end-1);
// }
// int main() {
//     int n;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the elements of the array: ");
//     for(int i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     printf("The original array is: ");
//     for(int i=0;i<n;i++) {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     reverse_array(arr,0,n-1);
//     printf("The reversed array is: ");
//     for(int i=0;i<n;i++) {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }


// 9. program to reverse a string using recursion
// #include <stdio.h>
// void reverse_string(char str[], int start, int end) {
//     char temp;
//     if(start>=end) {
//         return;
//     }
//     temp = str[start];
//     str[start] = str[end];
//     str[end] = temp;
//     reverse_string(str,start+1,end-1);
// }
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     scanf("%s",str);
//     int i=0;
//     while(str[i]!='\0') {
//         i++;
//     }
//     reverse_string(str,0,i-1);
//     printf("The reversed string is: %s\n",str);
//     return 0;
// }


// 10. program to print all the subsets of a given set of integers using recursion
// #include <stdio.h>
// void print_subset(int arr[], int n, int index) {
//     if(index==n) {
//         for(int i=0;i<n;i++) {
//             if(arr[i]==1) {
//                 printf("%d ",i+1);
//             }
//         }
//         printf("\n");
//         return;
//     }
//     arr[index] = 0;
//     print_subset(arr,n,index+1);
//     arr[index] = 1;
//     print_subset(arr,n,index+1);
// }
// int main() {
//     int n;
//     printf("Enter the number of elements in the set: ");
//     scanf("%d",&n);
//     int arr[n];
//     print_subset(arr,n,0);
//     return 0;
// }


