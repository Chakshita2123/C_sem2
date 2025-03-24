//1. alphabet digit special character check
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char ch;

//     printf("Enter a character: ");
//     scanf("%c", &ch);

//     if (ch >= '0' && ch <= '9') {
//         printf("%c is a digit.\n", ch);
//     } 
//     else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//         printf("%c is an alphabet.\n", ch);
//     } 
//     else {
//         printf("%c is a special character.\n", ch);
//     }

//     return 0;
// }


//2. Calculator
// #include <stdio.h>

// int main() {
//     char operator;
//     double num1, num2, result;

//     printf("Enter an operator (+, -, *, /): ");
//     scanf(" %c", &operator);
//     printf("Enter two numbers: ");
//     scanf("%lf %lf", &num1, &num2);

//     switch(operator) {
//         case '+':
//             result = num1 + num2;
//             printf("Result: %.2lf\n", result);
//             break;
//         case '-':
//             result = num1 - num2;
//             printf("Result: %.2lf\n", result);
//             break;
//         case '*':
//             result = num1 * num2;
//             printf("Result: %.2lf\n", result);
//             break;
//         case '/':
//             if (num2 != 0) {
//                 result = num1 / num2;
//                 printf("Result: %.2lf\n", result);
//             } else {
//                 printf("Error! Division by zero is not allowed.\n");
//             }
//             break;
//         default:
//             printf("Error! Invalid operator.\n");
//     }
    
//     return 0;
// }

//3. Days in week using switch case
// #include <stdio.h>

// int main() {
//     int day;

//     printf("Enter the day number (1-7): ");
//     scanf("%d", &day);

//     switch(day) {
//         case 1:
//         printf("Monday\n");
//         break;

//         case 2:
//         printf("Tuesday\n");
//         break;

//         case 3:
//         printf("Wednesday\n");
//         break;

//         case 4:
//         printf("Thursday\n");
//         break;

//         case 5:
//         printf("Friday\n");
//         break;

//         case 6:
//         printf("Saturday\n");
//         break;

//         case 7:
//         printf("Sunday\n");
//         break;

//         default:
//             printf("Invalid day number! Please enter a number between 1 and 7.\n");
//     }
    
//     return 0;
// }


//4. Days in week using if else
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     int day;

//     printf("Enter a day number (1-7): ");
//     scanf("%d", &day);

//     if (day == 1) {
//         printf("Monday\n");
//     } else if (day == 2) {
//         printf("Tuesday\n");
//     } else if (day == 3) {
//         printf("Wednesday\n");
//     } else if (day == 4) {
//         printf("Thursday\n");
//     } else if (day == 5) {
//         printf("Friday\n");
//     } else if (day == 6) {
//         printf("Saturday\n");
//     } else if (day == 7) {
//         printf("Sunday\n");
//     } else {
//         printf("Invalid day number. Please enter a number between 1 and 7.\n");
//     }

//     return 0;
// }


//5. Days in month
// #include <stdio.h>

// int main() {
//     int month;
    
//     printf("Enter month number (1-12): ");
//     scanf("%d", &month);
    
//     switch (month) {
//         case 2:
//             printf("28 or 29 days (leap year dependent).\n");
//             break;
//         case 4: case 6: case 9: case 11:
//             printf("30 days.\n");
//             break;
//         case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//             printf("31 days.\n");
//             break;
//         default:
//             printf("Invalid month number!\n");
//     }
    
//     return 0;
// }


//6. Even odd using if else
// #include <stdio.h>

// int main() {
//     int num;

//     // Input a number from the user
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // Check if the number is even or odd
//     if (num % 2 == 0) {
//         printf("%d is even.\n", num);
//     } else {
//         printf("%d is odd.\n", num);
//     }

//     return 0;
// }


//7. Even odd using switch case
// #include <stdio.h>

// int main() {
//     int num;

//     // Input a number from the user
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // Using switch case to check even or odd
//     switch (num % 2) {
//         case 0:
//             printf("%d is even.\n", num);
//             break;
//         case 1:
//             printf("%d is odd.\n", num);
//             break;
//     }

//     return 0;
// }


//8. Maximum between two numbers
// #include <stdio.h>

// int main() {
//     int num1, num2;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     switch (num1 > num2) {
//         case 1  :
//             printf("The maximum number is: %d\n", num1);
//             break;
//         case 0:
//             printf("The maximum number is: %d\n", num2);
//             break;
//     }

//     return 0;
// }


//9. Positive negative and zero 
// #include <stdio.h>

// int main() {
//     int num;

//     // Input a number from the user
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     switch ((num > 0) - (num < 0)) {
//         case 1:
//             printf("%d is a positive number.\n", num);
//             break;
//         case -1:
//             printf("%d is a negative number.\n", num);
//             break;
//         case 0:
//             printf("%d is zero.\n", num);
//             break;
//     }

//     return 0;
// }


//10. Map choosing
// #include <stdio.h>

// int main() {
//     int map;
//     scanf("%d", &map);
//     switch(map) {
//         case 1:
//             printf("welcome to Erangle");
//             break;
//         case 2:
//             printf("welcome to miyamar");
//             break;
//         case 3:
//             printf("welcome to sanhok");
//             break;
//         case 4:
//             printf("welcome to vikendi");
//             break;

//     }
//     return 0;
// }


//11. Vowels or consonants
// #include <stdio.h>

// int main() {
//     char ch;

//     printf("Enter an alphabet: ");
//     scanf("%c", &ch);

//     ch = tolower(ch);

//     if (ch >= 'a' && ch <= 'z') {
//         switch (ch) {
//             case 'a':
//             case 'e':
//             case 'i':
//             case 'o':
//             case 'u':
//                 printf("%c is a vowel.\n", ch);
//                 break;
//             default:
//                 printf("%c is a consonant.\n", ch);
//         }
//     } else {
//         printf("Invalid input. Please enter a valid alphabet.\n");
//     }

//     return 0;
// }


//12. Months print
// #include <stdio.h>

// int main() {
//     int month;

//     printf("Enter the month number (1-12): ");
//     scanf("%d", &month);

//     switch (month) {
//         case 1:
//             printf("January\n");
//             break;
//         case 2:
//             printf("February\n");
//             break;
//         case 3:
//             printf("March\n");
//             break;
//         case 4:
//             printf("April\n");
//             break;
//         case 5:
//             printf("May\n");
//             break;
//         case 6:
//             printf("June\n");
//             break;
//         case 7:
//             printf("July\n");
//             break;
//         case 8:
//             printf("August\n");
//             break;
//         case 9:
//             printf("September\n");
//             break;
//         case 10:
//             printf("October\n");
//             break;
//         case 11:
//             printf("November\n");
//             break;
//         case 12:
//             printf("December\n");
//             break;
//         default:
//             printf("Invalid month number! Please enter a number between 1 and 12.\n");
//     }

//     return 0;
// }


//13. eligibilty check for donation
// #include <stdio.h>

// int main(){
//     int a,b;
//     scanf("%d\t%d",&a,&b);
//     if(a>18 && b>50)
//     printf("eligible to donate");
//     else
//     printf("not eligible");
//     return 0;

// }


//14. Positive negative or zero (Part 2)
// #include <stdio.h>

// int main() {
//     int num;
//     printf("enter the number:");
//     scanf("%d", &num);

//     switch (num > 0) {
//         case 1:
//             printf("%d is positive", num);
//         break;
//         case 0:
//             switch (num < 0) {
//                 case 1:
//                     printf("%d is negative", num);
//                     break;
//                 case 0:
//                     printf("%d is zero", num);
//                     break;
//         }
//     break;
//     }
// }


//15. Maximum between three numbers
// #include<stdio.h>

// int main(){
//     int a,b,c;
//     scanf("%d\t%d\t%d",&a,&b,&c);
//     if(a>b && a>c)
//     printf("A is the greatest");
//     else if(b>a && b>c)
//     printf("B is the greatest");
//     else
//     printf("C is the greatest");
//     return 0;
// }


//16. Weight and age check for jumping
// #include <stdio.h>
// int main(){
//     int age,weight;
//     scanf("%d\t%d",&age,&weight);
//     if((age>12) && (weight>=40))
//     printf("he can jump");
//     else if(weight<=110)
//     printf("extra ropes");
//     else
//     printf("he can't jump");
//     return 0;
// }


//17. Enter the notes for denomination 10,20,50,100,200,500,1000. and then find the total amount and frequency of notes
// #include <stdio.h>
// int main() {
//     int denominations[] = {10,20,50,100,200,500,1000};
//     int frequency[7] = {0};
//     int totalAmount = 0;
//     for (int i = 0; i<7;i++) {
//         printf("Enter the number of %d notes:",denominations[i]);
//         scanf("%d",&frequency[i]);
//     }
//     for (int i = 0; i<7;i++) {
//         totalAmount += denominations[i] * frequency[i];
//     }
//     printf("\nFrequency of each note:\n");
//     for (int i = 0; i<7;i++) {
//         printf("%d: %d notes\n",denominations[i],frequency[i]);
//     }
//     printf("\nTotal Amount: %d\n",totalAmount);
//     return 0;
// }


//18. Enter a amount and check how many notes of 10 , 20 , 50 , 100,500 notes can be there
// #include <stdio.h>

// int main() {
//     int amount;
//     int notes10 = 0, notes20 = 0, notes50 = 0, notes100 = 0, notes500 = 0;
//     printf("Enter the amount: ");
//     scanf("%d", &amount);
//     if (amount >= 500) {
//         notes500 = amount / 500;
//         amount = amount % 500;
//     }
//     if (amount >= 100) {
//         notes100 = amount / 100;
//         amount = amount % 100;
//     }
//     if (amount >= 50) {
//         notes50 = amount / 50;
//         amount = amount % 50;
//     }
//     if (amount >= 20) {
//         notes20 = amount / 20;
//         amount = amount % 20;
//     }
//     if (amount >= 10) {
//         notes10 = amount / 10;
//         amount = amount % 10;
//     }
//     printf("\nNumber of notes:\n");
//     printf("500: %d\n", notes500);
//     printf("100: %d\n", notes100);
//     printf("50: %d\n", notes50);
//     printf("20: %d\n", notes20);
//     printf("10: %d\n", notes10);

//     if (amount > 0) {
//         printf("Remaining amount that cannot be broken into notes: %d\n", amount);
//     }

//     return 0;
// }


// determine whether the entered character is vowel or consonant . if any digit is entered print invalid entered.
// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if (isdigit(ch)) {
//         printf("Invalid input.\n");
//     } 
//     else if (isalpha(ch)) {
//         ch = tolower(ch);
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             printf("'%c' is a vowel.\n", ch);
//         } else {
//             printf("'%c' is a consonant.\n", ch);
//         }
//     } else {
//         printf("Invalid input.\n");
//     }
    
//     return 0;
// }


//enter a 5 digit numeric code. condition: count even and odd digits. If the count of even digit is greater then the decoded code is the sum of even digits. If the count of odd digits is greater then the decoded code is the sum of odd digits.
// #include <stdio.h>
// int main() {
//     int num, digit, even_sum = 0, odd_sum = 0;
//     int even_count = 0, odd_count = 0;
//     printf("Enter a 5-digit numeric code: ");
//     scanf("%d", &num);
//     if (num < 10000 || num > 99999) {
//         printf("Invalid input. Please enter a 5-digit number.\n");
//         return 1;
//     }
//     int temp = num;
//     while (temp > 0) {
//         digit = temp % 10;
//         if (digit % 2 == 0) {
//             even_sum += digit;
//             even_count++;
//         } else {
//             odd_sum += digit;
//             odd_count++;
//         }
//         temp /= 10;
//     }
//     if (even_count > odd_count) {
//         printf("Decoded code: %d\n", even_sum);
//     } else {
//         printf("Decoded code: %d\n", odd_sum);
//     }
    
//     return 0;
// }


//enter any integer value . print its sum and map that sum with alphabets. If sum>26 the alphabet should start repeating themselves from a again.
// #include <stdio.h>
// int main() {
//     int num, digit, sum = 0;
//     printf("Enter an integer: ");
//     scanf("%d", &num);
//     if (num < 0) {
//         num = -num;
//     }
//     while (num > 0) {
//         digit = num % 10;
//         sum += digit;
//         num /= 10;
//     }
//     char mapped_char = 'A' + (sum - 1) % 26;
//     printf("Sum of digits: %d\n", sum);
//     printf("Mapped alphabet: %c\n", mapped_char);
    
//     return 0;
// }


//check whether a number is palindrome or not in a particular range.
// #include <stdio.h>
// int isPalindrome(int num) {
//     int reversed = 0, original = num, digit;
//     while (num > 0) {
//         digit = num % 10;
//         reversed = reversed * 10 + digit;
//         num /= 10;
//     }
//     return original == reversed;
// }
// int main() {
//     int start, end;
//     printf("Enter the start of the range: ");
//     scanf("%d", &start);
//     printf("Enter the end of the range: ");
//     scanf("%d", &end);
//     if (start > end) {
//         printf("Invalid range! Start should be less than or equal to end.\n");
//         return 1;
//     }
//     printf("Palindrome numbers in the range [%d, %d]:\n", start, end);
//     for (int i = start; i <= end; i++) {
//         if (isPalindrome(i)) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");
    
//     return 0;
// }


//enter three integers that represent the length of triangle . Output should be either equilateral or isosceles or scalene or invalid input.
// #include <stdio.h>
// int checkTriangle(int a, int b, int c) {
//     if (a + b <= c || a + c <= b || b + c <= a) {
//         printf("Invalid input. The given lengths do not form a triangle.\n");
//         return 0;
//     } else if (a == b && b == c) {
//         printf("Equilateral Triangle\n");
//         return 1;
//     } else if (a == b || b == c || a == c) {
//         printf("Isosceles Triangle\n");
//         return 2;
//     } else {
//         printf("Scalene Triangle\n");
//         return 3;
//     }
// }
// int main() {
//     int a, b, c;
//     printf("Enter three integer values representing the sides of a triangle: ");
//     scanf("%d %d %d", &a, &b, &c);
//     checkTriangle(a, b, c);
    
//     return 0;
// }


//enter the timings : input should be start time and end time . Time is of 1st class and 2nd class. Check whether there is a conflict between timings of the two classes. If yes print conflict else print no conflict
// #include <stdio.h>
// int checkConflict(int start1, int end1, int start2, int end2) {
//     if (start1 < end2 && start2 < end1) {
//         printf("Conflict\n");
//         return 1;
//     } else {
//         printf("No Conflict\n");
//         return 0;
//     }
// }

// int main() {
//     int start1, end1, start2, end2;
//     printf("Enter start and end time for 1st class: ");
//     scanf("%d %d", &start1, &end1);
//     printf("Enter start and end time for 2nd class: ");
//     scanf("%d %d", &start2, &end2);
//     checkConflict(start1, end1, start2, end2);
//     return 0;
// }


// #include<stdio.h>
// int main() {
// int x=10;
// printf("%d%d%d", x, x++, ++x);
// return 0;
// }

// #include<stdio.h>
// int main() {
// printf("%d", sizeof(3,3));
// return 0;
// }

#include <stdio.h>

int main() {
    int a = 5, b = 3;
    int result = a | b;
    printf("OR Result: %d\n", result);
    return 0;
}
