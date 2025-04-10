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
// #include <stdio.h>
// int main() {
//     int num1, num2, difference;
//     int *ptr1,*ptr2;
//     ptr1=&num1;
//     ptr2=&num2;

//     printf("Enter any two numbers: ");
//     scanf("%d %d",ptr1,ptr2);

//     difference=*ptr1-*ptr2;
//     printf("Difference=%d",difference);
//     return 0;
// }

// NOTE : pointer can not be multiplied or divided


// 5. comparison (==) :
// #include <stdio.h>

// int main() {
//     int a, b;
//     int *ptr1, *ptr2;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     ptr1 = &a;
//     ptr2 = &b;

//     if (*ptr1 > *ptr2) {
//         printf("The larger number is: %d\n", *ptr1);
//     } else if (*ptr1 < *ptr2) {
//         printf("The larger number is: %d\n", *ptr2);
//     } else {
//         printf("Both numbers are equal.\n");
//     }

//     return 0;
// }




// MEMORY ALLOCATION FUNCTIONS:

// MEMORY ALLOCATION : Static  &  Dynamic
// Static - memory allocation when variable is declared (size define ho like arr[100])
// Problem with static - size readjustment & memory wastage

// Dynamic - when u dont know in advance
// Pointers are used in this

// DIFFERENCE B/W STATIC & DYNAMIC
// 1. Timing :      static - compile time                              ||        dynamic - run time
// 2. Size :        static - fixed                                     ||        dynamic - non fixed
// 3. Storage :     static - stack                                     ||        dynamic - heap
// 4. Advantage :   static - simple to manage & faster access          ||        dynamic - flexible
// 5. Disadvantage: static - not flexible & memory wastage             ||        dynamic - memory leakage




// DYNAMIC MEMORY ALLOCATION


// DIFFERENCE BETWEEN MALLOC & CALLOC
//             Malloc                                              ||                  Calloc
// 1. allocate only 1 block                                        || 1. allocate multiple blocks
// 2. does not initialize memory (contains garbage value)          || 2. initialization is 0
// 3. takes 1 arguementb (total size in bytes)                     || 3. takes 2 arguments (number of blocks, size of each block)
// 4. syntax : ptr = (int *)malloc(size);                          || 4. syntax : ptr = (int *)calloc(n,size);
// 5. faster                                                       || 5. slightly slower





// 1. malloc - allocates memory
// syntax : syntax : ptr = (int *)malloc(size);   

// code 1 :
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *arr;
//     int size = 5;
//     arr = (int *)malloc(size *sizeof(int));
//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     for (int i = 0;i<size;i++) {
//         arr[i] = i + 1;
//     }
//     for (int i = 0;i<size;i++) {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
//     free(arr);
//     return 0;
// }

// code 2 :
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *int_ptr=(int *)malloc(sizeof(int));
//     if (int_ptr==NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     *int_ptr=10;
//     printf(" Integer Value  : %d\n",*int_ptr);
//     printf(" Address of int_ptr : %p\n",int_ptr);
//     // allocate memory for char
//     char *char_ptr=(char*)malloc(sizeof(char));
//     if (char_ptr==NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     *char_ptr='A';
//     printf(" Character Value : %c\n",*char_ptr);
//     printf(" Address of char_ptr : %p\n",char_ptr);
//     // allocate memory for float

//     float *float_ptr=(float*)malloc(sizeof(float));
//     if (float_ptr==NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     *float_ptr=3.14;
//     printf(" Float Value : %f\n",*float_ptr);
//     printf(" Address of float_ptr : %p\n",float_ptr);
//     // free allocated memory
//     free(int_ptr);
//     free(char_ptr);
//     free(float_ptr);
//     return 0;
    
// }



// 2. calloc - allocates and initialize memory
// ptr = (int *)calloc(n,size);


// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *arr;
//     int size = 5;
//     arr = (int *)calloc(size,sizeof(int));
//     if (arr==NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     for (int i = 0; i<size; i++) {
//         arr[i] = i + 1;
//     }
//     printf("Original array: \n");
//     for (int i = 0; i <size;i++) {
//         printf("%d",arr[i]);
//     }
//     size = 10;
//     arr = (int *)realloc(arr,size * sizeof(int));
//     if (arr == NULL) {
//         printf("Memory reallocation failed\n");
//         return 1;
//     }
//     for (int i = 5; i<size;i++) {
//         arr[i] = i+1;
//     }    
//     printf("\nResized array: \n");
//     for (int i = 0;i<size;i++) {
//         printf("%d",arr[i]);
//     }
//     printf("\n");
//     free(arr);
//     return 0;
// }



// Ques. sorting by dynamically allocating the memory
// #include <stdio.h>
// #include <stdlib.h>
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void bubbleSort(int *arr, int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(&arr[j], &arr[j + 1]);
//             }
//         }
//     }
// }

// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int *arr = (int *)malloc(n * sizeof(int));
    
//     if (arr == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }
//     printf("Enter %d elements: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     bubbleSort(arr, n);
//     printf("Sorted array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     free(arr);
//     return 0;
// }



// 3. realloc - resizes allocated memory
// syntax : ptr =(data type *)relloc(ptr,new size);
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(){
//     char *text = NULL;
//     int size = 0;
//     char ch;
//     printf("Enter text(press enter to finish);\n");;
//     while((ch=getchar())!='\n'){
//         size++;
//         text = (char *)realloc(text,size*sizeof(char));
//         text[size-1]=ch;
//     }
//     text[size]='\0';
//     printf("You entered: %s\n",text);
//     free(text);
//     return 0;
// }


// Ques . Read 1D array , print sum & its elements
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n, sum = 0;
    
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
    
//     int *arr = (int *)malloc(n * sizeof(int));
//     if (!arr) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
    
//     printf("Enter %d elements: ", n);
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }
    
//     printf("Elements: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\nSum: %d\n", sum);
    
//     free(arr);
//     return 0;
// }



// 4. free - releases memory
// syntax : free(ptr);














