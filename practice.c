// #include <stdio.h>
// int main() {
//     int num1,num2;
//     printf("Enter two numbers");
//     scanf("%d %d",&num1,&num2);
//     if (num1>num2) {
//         printf("Num1 is greater\n");
//     } else {
//         printf("Num2 is greater\n");
//     }
//     return 0;
// }


#include <stdio.h>
int main() {
    int age , weight;
    scanf("%d",&age);
    scanf("%d",&weight);
    if (age>18 && weight>50) {
        printf("Eligible to donate blood.\n");
    } else {
        printf("Not eligible to donate blood.\n");
    }
    return 0;
}