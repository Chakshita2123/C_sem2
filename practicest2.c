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
#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++) {
        for (j=1;j<=i;j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}