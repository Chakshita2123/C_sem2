// LOOPS 
// TYPES : for , while , do while

// FOR LOOP
// syntax : for (initialization; condition; updation) {
    //             // code to be executed}
// initialisation : int i = 1
// condition : i<=10
// updation : i = i+1

// #include <stdio.h>
// int main() {
//     for (int i=1;i<=5;i=i+1) {
//         printf("HEello\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     for (int i =1;i<=100;i=i+1) {
//         printf("%d\n",i);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     for (int i=0;i<=10;i=i+1) {
//         printf("%d ",i);
//     }
//     return 0;
// }


// INCREMENT OPERATOR

// i++ (pre increment)
// this means pehle i ki value ko use krlo nd then increase krlo
// #include <stdio.h>
// int main() {
//     int i = 1;
//     printf("%d\n",i++);
//     printf("%d\n",i);
// }

// ++i (post increment)
// this means pehle increase krlo nd then use
// #include <stdio.h>
// int main() {
//     int i = 1;
//     printf("%d\n",++i);
//     printf("%d\n",i);
//     return 0;
// }


// DECREMENT OPERATOR

// i-- (pre decrement)
// this means pehle i ki value ko use krlo nd then decrease
// #include <stdio.h>
// int main() {
//     int i = 2;
//     printf("%d\n",i--);
//     printf("%d\n",i);
//     return 0;
// }

// --i (post decrement)
// this means pehle decrease krlo i ki value nd then use krlo
// #include <stdio.h>
// int main() {
//     int i = 2;
//     printf("%d\n",--i);
//     printf("%d\n",i);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     for (float i = 1.00; i<=5.00;i++){
//         printf("%f\n",i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     for (char ch='a' ;ch<='z';ch++) {
//         printf("%c\n",ch);
//     }
//     return 0;
// }


// WHILE LOOP
// syntax: while(condition) {
//             // code to be executed
//  }


// #include <stdio.h>
// int main() {
//     int i = 1;
//     while(i<=5) {
//         printf("Hello\n");
//         i++;
//     }
//     return 0;
// }

// Question. Print the numbers from 0 to n , if n is given by user nd n = 4
// #include <stdio.h>
// int main() {
//     int i = 0;
//     while (i<=4) {
//         printf("%d\n",i++);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);

//     int i = 0;
//     while (i<=n) {
//         printf("%d\n",i++);
//     }
//     return 0;
// }


// DO WHILE LOOP
// sytanx : do {
//             // code to be executed
//         } while(condition);
// this loop will execute at least once even if the condition is false
// #include <stdio.h>
// int main() {
//     int i = 1;
//     do {printf("Hello\n");
//         i++;
//     } while (i<=5); 
// }

// Question . Print the sum of first n natural numbers .. n = 4 nd also print them in reverse
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     int i = 1;
//     int sum = 0;
//     do {
//         sum = sum + i;
//         i++;
//     } while (i<=n);
//     printf("Sum = %d\n",sum);
//     printf("Reverse order : ");
//     for (int j = n; j>=1;j--) {
//         printf("%d ",j);
//     }
//     printf("\n");
//     return 0;
// }


// Question . Print the table of a number input by the user using for loop
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d\n",&n);
//     for (i=1;i<=10;i++) {
//         printf("%d\n",n*i);
//     }
//     return 0;
// }


// Question . Print the factorial of a number n
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     int fact = 1;
//     for (int i = 1;i<=n;i++) {
//         fact = fact * i;
//     }
//     printf("%d\n",fact);
//     return 0;
// }

// Question . Print reverse of the table of a number n
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i = 10;i>=1;i--) {
//         printf("%d\n",n*i);
//     }
//     return 0;
// }




// FUNCTIONS
// syntax : return_type function_name(parameters) {
//             // code to be executed   
//         }
// return_type : int , float , char , void (no return value)
// function_name : name of the function

// Question. sum of two numbers using function
// #include <stdio.h>
// int sum(int a, int b) {
//     return a+b;
// }
// int main() {
//     int a,b,c;
//     a=5;
//     b=10;
//     c=sum(a,b);
//     printf("%d\n",c);
//     return 0;
// }




// RECURSION
// syntax : return_type function_name(parameters) {
//             // code to be executed
//             function_name(parameters);
//         }

// Factorial using recursion
// #include <stdio.h>
// int fact(int n) {
//     if (n==0 || n==1) {
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main() {
//     int n;
//     scanf("%d",&n);
//     int result = fact(n);
//     printf("%d\n",result);
//     return 0;
// }


// Fibonacci series using recursion
// #include <stdio.h>
// int fib(int n) {
//     if (n==0) {
//         return 0;
//     }
//     if (n==1) {
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i = 0;i<n;i++) {
//         printf("%d ",fib(i));
//     }
//     printf("\n");
//     return 0;
// }

// Fibonacci series using loop
// #include <stdio.h>
// int fib(int n) {
//     int a = 0;
//     int b = 1;
//     int c;
//     for (int i = 0;i<n;i++) {
//         printf("%d ",a);
//         c = a+b;
//         a = b;
//         b = c;
//     }
//     printf("\n");
// }
// int main() {
//     int n;
//     scanf("%d",&n);
//     fib(n);
//     return 0;
// }


// ARRAYS
// syntax : data_type array_name[size];
// data_type : int , float , char , double
// array_name : name of the array
// size : number of elements in the array
// int arr[5]; // array of size 5
// int arr[5]={1,2,3,4,5}; // array of size 5 with initial values


// Printing patterns with loops

// 1. right triangle star pattern
// #include <stdio.h>
// int main() {
//     int i,j,n;
//     scanf("%d",&n);
//     for (i=1;i<=n;i++) {
//         for (j=1;j<=i;j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 2. inverted right triangle star pattern
// #include <stdio.h>
// int main() {
//     int i,j,n;
//     scanf("%d",&n);
//     for (i=n;i<=1;i--) {
//         for (j=1;j<=i;j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 3. right triangle number pattern
// #include <stdio.h>
// int main() {
//     int i,j,n;
//     scanf("%d",&n);
//     for (i=1;i<=n;i++) {
//         for (j=1;j<=n;j++){
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 4. pyramid star pattern
// #include <stdio.h>
// int main() {
//     int i,j,n;
//     scanf("%d",&n);
//     for (i=1;i<=n;i++) {
//         for (j=1;j<=n-i;j++) {
//             printf(" ");
//         }
//         for (j=1;j<=2*i-1;j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 5. inverted pyramid star pattern
// #include <stdio.h>
// int main() {
//     int i,j,n;
//     scanf("%d",&n);
//     for (i=n;i>=1;i--) {
//         for (j=1;j<=n-i;j++) {
//             printf(" ");
//         }
//         for (j=1;j<=2*i-1;j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// 6. diamond star pattern
// #include <stdio.h>
// int main() {
//     int i,j,n;
//     scanf("%d",&n);
//     for (i=1;i<=n;i++) {
//         for (j=1;j<=n-i;j++) {
//             printf(" ");
//         }
//         for (j=1;j<=2*i-1;j++) {
//             printf("*");
//         }
//         printf("\n");
//         }
//     for (i=n;i>=1;i--) {
//         for (j=1;j<=n-i;j++) {
//             printf(" ");
//         }
//         for (j=1;j<=2*i-1;j++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }








// STORAGE CLASSES
// 1. auto storage (auto)
// scope - local ; lifetime - within function ; default value - garbage value ; memory location - RAM ; storage place - stack
// #include <stdio.h>
// void function() {
//     auto int x = 10;
//     printf("%d\n",x);
// }
// int main() {
//     function();
//     return 0;
// }
// NOTE : auto is rarely used bcuz all local variables are auto by default

// 2. static storage (static)
// scope - local ; lifetime - till the function ends ; default value - 0 ;memory location - ram ;; storage place - stack

// for local variable
// #include <stdio.h>
// void counter() {
//     static int counter = 0;
//     counter ++;
//     printf("Counter = %d\n",counter);
// }
// int main() {
//     counter();
//     counter();
//     counter();
//     return 0;
// }
// NOTE : static keeps its value even after the function ends

// for global variable
// #include <stdio.h>
// static int x = 10;
// void display() {
//     printf("%d\n",x);
// }
// NOTE : if a variable is declared outside the function, it wont be able to access in other files.

// 3. external storage (extern)
// scope - global ; lifetime - till the function ends ; default value - 0 ; memory location - ram ; storage place - stack
// NOTE : does not allocate memory , it just refers to an already declared cariable

// 4. register storage (register)
// scope - local ; lifetime - within the function ; default value - garbage value ; memory location - register ; storage place - stack
// #include <stdio.h>
// int main(){
//     register int i;
//     printf("%d ",i);
//     return 0;
// }
// NOTE : register variables cannot have &(address operator) because they may not be in RAM



// NESTED LOOP








// SQUARE PATTERN
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n;j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// RIGHT ANGLED TRIANGLE
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++) {
//         for (int j = 1;j<=i;j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// INVERTED TRIANGLE
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i = n;i<=1;i--) {
//         for (int j=1;j<=i;j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// NUMBER PYRAMID
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i=1;i<=n;i++) {
//         for (int j=1;j<=n-i;j++) {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// DO WHILE LOOP

// Print numbers from 1 to 5
// #include <stdio.h>
// int main() {
//     int i = 1;
//     do {
//         printf("%d\n",i);
//         i++;
//     } while (i<=5);
//     return 0;
// }

// Nested Loops allow creating complex structures like patterns and matrices.
// Printing Patterns is a great way to practice loops.
// Do-While Loop ensures execution at least once, useful for menu-driven programs.


// RECURSIONS

// Factorial using recursion
// #include <stdio.h>
// int factorial(int n) {
//     if (n==1 || n==0) {
//         return 1;
//     }
//     else {
//         return n*factorial(n-1);
//     }
//     int main() {
//         int n, result;
//         scanf("%d", &n);
//         result = factorial(n);
//         printf("%d\n", result);
//         return 0;
//     }
// }

// Fibonacci series using recursion
// #include <stdio.h>
// int fibonacci(int n) {
//     if (n==0) {
//         return 0;
//     }
//     else if (n==1) {
//         return 1;
//     }
//     else {
//         return fibonacci(n-1) + fibonacci(n-2);
//     }
//     int main() {
//         int n, i;
//         scanf("%d", &n);
//         for (i=0; i<n; i++) {
//             printf("%d ", fibonacci(i));
//         }
//         printf("\n");
//         return 0;
//     }
// }

// Sum of digits using recursion
// #include <stdio.h>
// int sumOfDigits(int n) {
//     if (n == 0) return 0;  // Base case
//     return (n % 10) + sumOfDigits(n / 10);  // Recursive case
// }
// int main() {
//     int num;
//     scanf("%d",&num);
//     printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
//     return 0;
// }



// POINTERS
// stores the location of the value  || stores the memory address of another variable
// syntax : data_type *ptr_name;
// eg:
// #include <stdio.h>
// int main() {
//     int x = 10;
//     int *ptr = &x;    // stores address
//     printf("%p",ptr);   // prints memory address 
// }


// call by value - does not affect original value
// #include <stdio.h>
// void swap(int a, int b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main() {
//     int x = 5, y = 10;
//     printf("Before swap: x = %d, y = %d\n", x, y);
//     swap(x, y); // Call by value
//     printf("After swap: x = %d, y = %d\n", y, x);
//     return 0;
// }

// call by reference - changes original value
// #include <stdio.h>
// int main() {
//     int x = 5,y = 10;
//     int *ptr1 = &x;
//     int *ptr2 = &y;
//     printf("%d %d\n",*ptr1,*ptr2);
//     *ptr1 = 20;
//     *ptr2 = 30;
//     printf("%d %d\n",*ptr1,*ptr2);
//     return 0;
// }
  
// p++ - moves to next memory location
// p-- - moves to previous memory location
// p + n - move n steps forward
// p - n - move n steps backward

// #include <stdio.h>
// int main() {
//     int arr[5] = {1,2,3,4,5};
//     int *p = arr;
//     printf("%d",*p);
//     p++;
//     printf("%d",*p);
//     p--;
//     printf("%d",*p);
//     p = p + 2;
//     printf("%d",*p);
//     p = p - 2;  
//     printf("%d",*p);            
//     return 0;
// }


// pointer difference
// #include <stdio.h>
// int main() {
//     int arr[7] = {1,2,3,4,5,6,7};
//     int *ptr = &arr[0];
//     int *ptr2 = &arr[4];
//     printf("%ld\n",ptr2-ptr);
//     return 0;
// }

// pointer with arrays (using pointer instead of indexing)
// #include <stdio.h>
// int main() {
//     int arr[5]={1,2,3,4,5};
//     int *p = arr;
//     for(int i=0;i<5;i++) {
//         printf("%d ",*(p+i));
//     }
//     return 0;
// }


// ARRAYS
// #include <stdio.h>
// int main() {
//     int arr[5];
//     for(int i = 0;i<=5;i++) {
//         scanf("%d",&arr[i]);
//     }
//     for(int i = 0;i<5;i++) {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// searching an element in array
// #include <stdio.h>
// int main() {
//     int arr[] = {1,2,3,4,5};
//     int target = 3;
//     int found = 0;
//     for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
//         if (arr[i] == target) {
//             found = 1;
//             break;
//         }
//     }
//     if (found) {
//         printf("Element found\n");
//     } else {
//         printf("Element not found\n");
//     }
//     return 0;
// }

// memory address of array
// #include <stdio.h>
// int main() {
//     int arr[3] = {1,2,3};
//     for(int i =0;i<3;i++) {
//         printf("%p\n",&arr[i]);
//     }
//     return 0;
// }


// print a hollow square pattern
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<n;j++) {
//             if (i==0||i==n-1||j==0||j==n-1) {
//                 printf("* ");
//             } else {
//                 printf("  ");
//             }

//         }
//         printf("\n");
//     }
//     return 0;
// }

// print a mirrored right triangle pattern
// #include <stdio.h>
// int main() {
//     int n;
//     scan("%d",&n);
//     for (int i = 0;i<n;i++) {
//         for (int j = 0;j<n-i-1;j++) {
//             printf(" ");
//         }
//         for (int j = 0;j<=i;j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

// print diamond pattern
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i=0;i<=n;i++) {
//         for (int j=0;j<n-i;j++) {
//             printf(" ");
//         }
//         for (int j=0;j<=i;j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for (int i=n-1;i>=0;i--) {
//         for (int j=0;j<n-i;j++) {
//             printf(" ");
//         }
//         for (int j=0;j<=i;j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Print floyd's triangle pattern
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     int num = 1;
//     for (int i = 0;i<n;i++) {
//         for (int j = 0;j<n;j++) {
//             printf("%d ",num);
//             num++;
//         }
//         printf("\n");
//         }
//     return 0;
// }

// print an alternating numeric triangle
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i = 1;i<=n;i++) {
//         for (int j = 1;j<=i;j++) {
//             if ((i+j)%2==0) {
//                 printf("1 ");
//             } else {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// print a hollow diamond pattern
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i = i;i<=n;i++) {
//         for (int j = 1;j<=n-i;j++) {
//             printf(" ");
//         }
//         for (int k=1;k<=2*i-1;k++) {
//             if (k==1||k==2*i-1) {
//                 printf("*");
//             }
//             else {
//                 printf(" ");
//             }

//         }
//         printf("\n");
//     }
//     for (int i = n-1;i>0;i--) {
//         for (int j = 1;j<=n-i;j++) {
//             printf(" ");
//         }
//         for (int k=1;k<=2*i-1;k++) {
//             if (k==1||k==2*i-1) {
//                 printf("*");
//             }
//             else {
//                 printf(" ");
//             }

//         }
//         printf("\n");
//     }
//     return 0;
// }

// print a palindromic number triangle
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i = 1;i<=n;i++) {
//         for (int j = 1;j<=n-i;j++) {
//             printf(" ");
//         }
//         for (int j=1;j<=i;j++) {
//             printf("%d",j);
//         }
//         for (int j = i-1;j>=1;j--) {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// print an increasing numeric pyramid
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i = 1;i<=n;i++) {
//         for (int j = 1;j<=n-i;j++){
//             printf(" ");
//         }
//         for (int j = 1;j<=i;j++) {
//             printf("%d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// print numbers from 1 to n
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i = 1;i<=n;i++) {
//         printf("%d ",i);
//     }
//     return 0;
// }

// sum of first n natural numbers
// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int sum = 0;
//     for (int i = 1;i<=n;i++) {
//         sum += i;
//     }
//     printf("%d\n",sum);
//     return 0;
// }

// multiplication table
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     for (int i = 1;i<=n;i++) {
//         for (int j = 1;j<=10;j++) {
//             printf("%d\n",i*j);
//         }
//     }
//     return 0;
// }

// prime number checker using function
// #include <stdio.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     int isprime=1;
//     for (int i = 2;i<=n/2;i++) {
//         if (n%i==0) {
//             isprime=0;
//             break;
//         }
//     }
//     if (isprime==1) {
//         printf("%d is a prime number\n",n);
//     } else {
//         printf("%d is not a prime number\n",n);
//     }
//     return 0;
// }


// prime number checker in a specific range using function
// #include <stdio.h>
// int isprime(int n) {
//     int isprime=1;
//     for (int i = 2;i<=n/2;i++) {
//         if (n%i==0) {
//             isprime=0;
//             break;
//         }
//     }
//     return isprime;
// }
// int main() {
//     int n,m;
//     scanf("%d %d",&n,&m);
//     for (int i = n;i<=m;i++) {
//         if (isprime(i)==1) {
//             printf("%d is a prime number\n",i);
//         } else {
//             printf("%d is not a prime number\n",i);
//         }
//     }
//     return 0;
// }

// find the first or last occurrence of an element in an array
// #include <stdio.h>
// int main() {
//     int arr[10],n,i,flag=0;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d",&n);
//     printf("Enter the elements of the array: ");
//     for (i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     int target;
//     printf("Enter the target element: ");
//     scanf("%d",&target);
//     for (i=0;i<n;i++) {
//         if (arr[i]==target) {
//             printf("Element found at index %d\n",i);
//             flag=1;
//             break;
//         }
//     }
//     if (flag==0) {
//         printf("Element not found\n");
//     }
//     return 0;
// }