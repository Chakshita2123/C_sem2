     //Arrays are used to store multiple values in single variable .
//square brackets
//array indexes start with 0

//when we check size of array using 'sizeof' , the result show size in bytes 
// eg : 5 elements are present 
// size = 5 elements * 4 bytes = 20 bytes


//Types of array:
//1. Compile time
//2. Run time



// #include<stdio.h>
// int main()
// {
//     int studmarks[5]={99,97,87,89,92};
//     int i;
//     printf("Marks of the student is: \n");
//     for (i=0;i<=4;++i){
//         printf("%d\t",studmarks[i]);
//     }return 0;
// }


#include <stdio.h>
int main()
{int a[100];
int i,n;
printf("number of elements in array \n");
scanf("%d",&n);
printf("enter the elements\n");
for (i=0;i<n;++i)
{
    scanf("%d",&a[i]);
}
printf("elements in array\n");
for(i=0;i<=n-1;++i)
{
    printf("%d\t",a[i]);
}
return 0;
}

//sum and average of ten numbers
// #include <stdio.h>
// int main()
// {
//     int i,num[10],sum=0;
//     float avg=0.0;
//     printf("enter ten numbers:\n");
//     for (i=0;i<10;i++)
//     {
//         scanf("%d",&num[i]);
//         sum+=num[i];
//     }
//     avg=(float)sum/10.0;
//     printf("\n sum of 10 number is:%d",sum);
//     printf("\n average of 10 numbers is:%f",avg);
//     return 0;
// }


// Matrix addition
// #include <stdio.h>

// int main() {
//     int i, j, a[3][3], b[3][3], sum[3][3];


//     printf("Enter elements for the first 3x3 matrix:\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             printf("Enter element a%d%d: ", i + 1, j + 1);
//             scanf("%d", &a[i][j]);
//         }
//     }

//     printf("\nEnter elements for the second 3x3 matrix:\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             printf("Enter element b%d%d: ", i + 1, j + 1);
//             scanf("%d", &b[i][j]);
//         }
//     }

//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             sum[i][j] = a[i][j] + b[i][j];
//         }
//     }

//     printf("\nFirst Matrix:\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nSecond Matrix:\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             printf("%d ", b[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\nSum of Matrices:\n");
//     for (i = 0; i < 3; i++) {
//         for (j = 0; j < 3; j++) {
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }