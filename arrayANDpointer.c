// pointers are useful to access the elements of arrays.

// #include <stdio.h>
// int main () {
//     int myNumbers[4] = {1,2,3,4};
//     printf("%p",myNumbers);
//     printf("%p\n",&myNumbers[1]);
//     return 0;
// }

// access individual elements
// #include <stdio.h>
// int main () {
//     int myNumbers[4] = {1,2,3,4};
//     printf("%p",*(myNumbers+1));
//     printf("%p\n",*(myNumbers+2));
//     return 0;
// }

// access all elements of array
// #include <stdio.h>
// int main() {
//     int myNumbers[4]={25,50,75,100};
//     int *ptr=myNumbers;
//     int i;
//     for (i=0;i<4;i++) {
//         printf("%d\n",*(ptr+i));
//     }
//     return 0;
// }

// modifying array using pointer
// #include <stdio.h>
// int main() {
//     int myNumbers[4]={25,50,75,100};
//     *myNumbers=13;
//     *(myNumbers+1)=17;
//     printf("%d\n",*myNumbers);
//     printf("%d\n",*(myNumbers+1));
//     return 0;
// }

// passing arrays to function
// #include <stdio.h>
// void printarray(int *arr,int size) {
//     int i;
//     for (int i=0;i<size;i++) {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
// }
// int main() {
//     int numbers[]={1,2,3,4,5};
//     printarray(numbers,5);
//     return 0;
// }

// 2D arrays

// modifying an array
// #include <stdio.h>
// int main(){
//     int matrix[2][3]={{1,2,3},{4,5,6}};
//     matrix[0][0]=10;
//     matrix[0][1]=20;
//     matrix[0][2]=30;
//     printf("%d\n",matrix[0][0]);
//     printf("%d\n",matrix[0][1]);
//     printf("%d\n",matrix[0][2]);
//     return 0;
// }


// Operations on 2D arrays:
// 1. TRAVERSING - access elements row by row or column by column
// 2. MODIFICATION - change specific elements using indices or pointers

// sum of all elements of matrix
// #include <stdio.h>
// void main(){
//     int sum =0;
//     int matrix[2][3]={{1,2,3},{4,5,6}};
//     for(int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//             sum+=matrix[i][j];
//         }
//     }
//     printf("The sum of the elements of the matrix is %d\n",sum);
// }

// transpose of matrix
// void main(){
//     int transpose[3][2],matrix[2][3]={{1,2,3},{4,5,6}};
//     for(int i=0; i<2; i++){
//         for(int j=0; j<3; j++){
//             transpose[j][i]=matrix[i][j];
//         }
//     }
//     printf("The transpose of the matrix is:\n");
//     for(int i=0; i<3; i++){
//         for(int j=0; j<2; j++){
//             printf("%d ",transpose[i][j]);
//         }
//         printf("\n");
//     }
// }

// print array using pointer
// #include<stdio.h>
// int main(){
//     int matrix[2][3]={{1,2,3},{4,5,6}};
//     int (*ptr)[3]=matrix;
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("%d",ptr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// POINTERS
// it is a variable which holds the address of another variable.
// Syntax : datatype *ptr-name
// TYPES : int,float,double,char

// Program to illustrate a pointer
// #include <stdio.h>
// int main() {
//     int *p,a;
//     printf("Enter the value of a\n"); 
//     scanf("%d",&a);
//     p = &a;
//     printf("Value of a is : %d\n",*p);     /* show a's value using p variable */
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int x = 10;int y = 20;
//     int *ptr 1 = &x;
//     int *ptr 2 = &y;
//     ptr1=ptr2;
//     printf("%d %d",*ptr1,*ptr2);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int a = 25, b;
//     int *ptr,*ptr1;
//     ptr = &a;
//     ptr1 = &b;
//     b = 36;
//     printf("%d %d",*ptr,*ptr1);
//     return 0;
// }



// BENEFITS of using POINTERS
// 1. used to access the address of variable
// 2. more efficient in handling arrays in c nd structures in c
// 3. reduces length of program nd its execution time as well
// 4. allows C language to support dynamic memory management
// 5. pointers are dynamic variables
// 6. used for dynamic memory allocation
// 7. enables us to access a variable that is defined outside the function
// 8. more efficient in handling the data tables
// 9. used in data structures in linked organization of data.


// POINTER OPERATORS 
// Two types of operator : 
// 1. address operator (&) : used to find the address of any type of variable
// Syntax : pointer = &variable-name (address of variable)

// 2. dereference operator (*) : access the value of variable through its address / pointer.
// Syntax : *pointervariable


// POINTERS ARITHMETIC in C
// 1. increment (++) : p = p + sizeof(datatype)
// #include <stdio.h>
// int main() {
//     int a = 20;
//     int *p;     // pointer to an integer
//     p = &a;     // pointer stores the address of a
//     printf("Pointer before increment: ");
//     printf("%p\n",p);
//     p++;        // incrementing pointer ptr 1
//     printf("Pointer after increment: ");
//     printf("%p\n",p);
//     return 0;
// }

// eg : 
// #include <stdio.h>
// int main() {
//     int x = 50;
//     int *ptr1= &x;
//     int *ptr2 = &x;
//     int y = ++*ptr2;     // increment the value of x through ptr2 and assign it to y
//     printf("%d %d",++*ptr1,y);
//     return 0;
// }



// 2. decrement (--) : 
// #include <stdio.h>
// int main() {
//     int a = 20;
//     int *p;
//     p = &a;
//     printf("Pointer before decrement: ");
//     printf("%p\n",p);
//     p--;
//     printf("POinter after decrement: ");
//     printf("%p\n",p);
//     return 0;
// }

// 3. addition (+) : new_address = current_address + (number * size_of(data type))
// when a pointer is added with a value, the value is first multiplied by the size of data type and then added to the pointer

// #include <stdio.h>
// int main() {
//     int a = 50;
//     int b = 3;
//     int *p;
//     p = &b;
//     printf("Address of p variable is %u\n",p);
//     p = p+b;
//     printf("After adding 3: Address of p variable is %u\n",p);
//     return 0;
// }

// int main() {
//     int a = 50;
//     float b = 3;
//     float *p;
//     p=&b;
//     printf("Address of p variable is %u\n",p);
//     p = p+a;
//     printf("After adding 3: Address of p variable is %u\n",p);
//     return 0;
// }


// Program to add two numbers using pointers
// #include <stdio.h>
// int main() {
//     int num1, num2, sum;
//     int *ptr1,*ptr2;
//     ptr1=&num1;
//     ptr2=&num2;

//     printf("Enter any two numbers: ");
//     scanf("%d %d",ptr1,ptr2);

//     sum=*ptr1+*ptr2;
//     printf("Sum=%d",sum);
//     return 0;
// }


// 4. subtraction (-) :
#include <stdio.h>
int main() {
    int num1, num2, difference;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;

    printf("Enter any two numbers: ");
    scanf("%d %d",ptr1,ptr2);

    difference=*ptr1-*ptr2;
    printf("Difference=%d",difference);
    return 0;
}

// 5. comparison (==) :
