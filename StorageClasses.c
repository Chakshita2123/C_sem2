// STORAGE CLASSES - used to determine the LIFETIME, VISIBILITY, MEMORY, LOCATION and INITIAL VALUE
// Storage class tells us:
// 1. Where the variable is stored (location of x)
// 2. What is the initial value of the variable (initial value of x)
// 3. What is the scope of the variable (visibility of x)
// 4. What is the lifetime of the variable (lifetime of x)\

// Types of storage classes:
// 1. Automatic (auto) : storage place - ram ; default value - garbage value ; scope - local ; lifetime - within function
// 2. Static (static) : storage place - ram ; default value - 0 ; scope - local ; lifetime - till the end of the program (maybe declared anywhere in the program)
// 3. External (extern) : storage place - ram ; default value - 0 ; scope - global ; lifetime - till the end of the program (retains value between multiple function calls)
// 4. Register (register) : storage place - register ; default value - garbage value ; scope - local ; lifetime - within function


// 1. AUTOMATIC STORAGE CLASS
// must be declared at the start of a block

// for integer
// #include <stdio.h>
// int main() {
//     auto int x;
//     printf("%d",x);
//     return 0;
// }

// for character and float
// #include <stdio.h>
// int main() {
//     auto char ch;
//     auto float f;
//     printf("%c %f",ch,f);
//     return 0;
// }


// 2. STATIC STORAGE CLASS
// visible only within the function where it is declared

// for integer
// #include <stdio.h>
// int fun() {
//     static int count = 0;
//     count++;
//     return count;
// }
// int main() {
//     printf("%d ",fun());
//     printf("%d ",fun());
//     printf("%d ",fun());
//     return 0;
// }

// when static is used on a global variable, it causes only one copy of that member to be shared by all the functions.
// #include <stdio.h>
// static int a = 10;
// static int b = 20;
// void sum() {
//     printf("%d %d\n",a,b);
//     a++;
//     b++;
// }
// void main() {
//     int i;
//     for(i=0;i<3;i++) {
//         sum();
//     }
// }

// a statis variable is shared among all calls of a function
// all calls to main() in the given program share the same i
// i becomes 0 before the printf() statement in all calls to main()
// int main(){
//     static int i=5;
//     if(--i){
//         main();
//         printf("%d",i);
//     }
//     return 0;
// }




// 3. REGISTER STORAGE CLASS
// can not use & operator for the register variable
// access time is faster than automatic variables
// int main(){
//     register int i;
//     printf("%d ",i);
//     return 0;
// }




// 4. EXTERNAL STORAGE CLASS
// used to give a reference of a global variable that is visible to all the program files
// to run this program , we have to compile both the files together so that main.c can access the variable i from file1.c
// #include <stdio.h>
// extern i;
// int main() {
//     printf("%d\n",i);
//     return 0;
// }

