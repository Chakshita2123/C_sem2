// 1. with the help of an array enter the marks of n students and calculate and print he difference between marks of second topper and second loser.
// #include <stdio.h>
// #include <string.h> 
// int main() {
//     int n, i, j;
//     float marks[50], temp;
    
//     printf("Enter the number of students: ");
//     scanf("%d", &n);
    
//     for (i = 0; i < n; i++) {
//         printf("Enter marks of student %d: ", i + 1);
//         scanf("%f", &marks[i]);
//     }
//     for (i = 0; i < n - 1; i++) {
//         for (j = i + 1; j < n; j++) {
//             if (marks[i] > marks[j]) {
//                 temp = marks[i];
//                 marks[i] = marks[j];
//                 marks[j] = temp;
//             }
//         }
//     }
    
//     if (n >= 3) {
//         float difference = marks[n - 2] - marks[1]; // Second topper - second loser
//         printf("Difference between second topper and second loser: %.2f\n", difference);
//     } else {
//         printf("Not enough students to calculate the difference.\n");
//     }
    
//     return 0;
// }


// 2. calculate the total fine as per the constraints :
// without helmet - fine is 1000
// without insurance - fine is 5000
// without license - fine is 3000
// calculate the total fine as per the constraints : input will be the total number of vehicles and further input will be corresponding to the constraints mentioned above. nd input should be 1 or 0 for each constraint.
// #include <stdio.h>
// int main() {
//     int n, i;
//     int helmet, insurance, license;
//     float totalFine = 0.0;
    
//     printf("Enter the number of vehicles: ");
//     scanf("%d", &n);
    
//     for (i = 0; i < n; i++) {
//         printf("\nVehicle %d:\n", i + 1);
        
//         printf("Without helmet (1 for yes, 0 for no): ");
//         scanf("%d", &helmet);
        
//         printf("Without insurance (1 for yes, 0 for no): ");
//         scanf("%d", &insurance);
        
//         printf("Without license (1 for yes, 0 for no): ");
//         scanf("%d", &license);
        
//         if (helmet == 1) {
//             totalFine += 1000;
//         }
//         if (insurance == 1) {
//             totalFine += 5000;
//         }
//         if (license == 1) {
//             totalFine += 3000;
//         }
//     }
    
//     printf("Total fine: %.2f\n", totalFine);
    
//     return 0;
// }


// 3. enter n numbers with constraints that first number must lie in range 1 to 9 then calculate sum of numbers and find out the number is pallindrome or not if within the number there is 0 print invalid number
// #include <stdio.h>
// int main() {
//     int n, i, sum = 0;
//     char str[20];
    
//     printf("Enter a number (1-9): ");
//     scanf("%s", str);
    
//     if (str[0] < '1' || str[0] > '9') {
//         printf("Invalid number. First digit must be between 1 and 9.\n");
//         return 1;
//     }
    
//     for (i = 0; str[i] != '\0'; i++) {
//         if (str[i] == '0') {
//             printf("Invalid number. Contains zero.\n");
//             return 1;
//         }
//         sum += str[i] - '0'; 
//     }
    
//     printf("Sum of digits: %d\n", sum);
    
//     int len = i;
//     int isPalindrome = 1;
//     for (i = 0; i < len / 2; i++) {
//         if (str[i] != str[len - i - 1]) {
//             isPalindrome = 0;
//             break;
//         }
//     }
    
//     if (isPalindrome) {
//         printf("The number is a palindrome.\n");
//     } else {
//         printf("The number is not a palindrome.\n");
//     }
    
//     return 0;
// }


// 4. u have to calculate the scholarship amount as per the criteria :
// tier 1 - 20% of tution fee
// tier 2 - 15% of tution fee
// tier 3 - 10% of tution fee
// if the student has greater than 10 extra curricular activities then scholarship amount will be increeased by 10%
// if b/w 5 to 10 then scholarship amount will be increased by 5%
// if less than 5 then no increase in scholarship amount
// if total scholarship is greater than 50000 then deduct 20% as administrative fees.
// if total scholarship is less than 50000 but greater than 25000 then deduct 15% as administrative fees
// if total scholarship is less than 25000 then deduct 10% as administrative fees
// output should be total scholarship amount before deduction and net scholarship amount after deduction
// #include <stdio.h>
// int main() {
//     float tuitionFee, scholarshipAmount, netScholarship;
//     int tier, extracurricularActivities;
    
//     printf("Enter the tuition fee: ");
//     scanf("%f", &tuitionFee);
    
//     printf("Enter the scholarship tier (1, 2, or 3): ");
//     scanf("%d", &tier);
    
//     printf("Enter the number of extracurricular activities: ");
//     scanf("%d", &extracurricularActivities);

//     switch (tier) {
//         case 1:
//             scholarshipAmount = 0.20 * tuitionFee;
//             break;
//         case 2:
//             scholarshipAmount = 0.15 * tuitionFee;
//             break;
//         case 3:
//             scholarshipAmount = 0.10 * tuitionFee;
//             break;
//         default:
//             printf("Invalid tier.\n");
//             return 1;
//     }
    
//     if (extracurricularActivities > 10) {
//         scholarshipAmount += 0.10 * scholarshipAmount;
//     } else if (extracurricularActivities >= 5) {
//         scholarshipAmount += 0.05 * scholarshipAmount; 
//     }
    
//     float adminFeesPercentage;
//     if (scholarshipAmount > 50000) {
//         adminFeesPercentage = 0.20; 
//     } else if (scholarshipAmount > 25000) {
//         adminFeesPercentage = 0.15; 
//     } else {
//         adminFeesPercentage = 0.10; 
//     }
    
//     float adminFees = adminFeesPercentage * scholarshipAmount;
//     netScholarship = scholarshipAmount - adminFees;
    
//     printf("Total scholarship amount before deduction: %.2f\n", scholarshipAmount);
//     printf("Net scholarship amount after deduction: %.2f\n", netScholarship);
    
//     return 0;
// }


// 5. an elevator system has to process the user request depending upon energy usage and safety measures . total floors are 20 if the requested floors are outside the range 1 - 20 then print invalid floor request. if the requested floor is the same as the current floor then print already here. otherwise move the elevator and calculate :
// the movement direction (up or down ) nd the number of floor moved.
// energy usage : 2 units per floor moved up 
// if the movement is greater than 10 floors print cooling delay please wait.
// input will be current floor and requested floor
// output should be : invalid floor request, already here , movement direction, number of floors moved , energy usage
// no energy usage while going down
// #include <stdio.h>
// int main() {
//     int currentFloor, requestedFloor, floorsMoved;
//     float energyUsage = 0.0;
    
//     printf("Enter the current floor (1-20): ");
//     scanf("%d", &currentFloor);
    
//     printf("Enter the requested floor (1-20): ");
//     scanf("%d", &requestedFloor);
    
//     if (currentFloor < 1 || currentFloor > 20 || requestedFloor < 1 || requestedFloor > 20) {
//         printf("Invalid floor request.\n");
//         return 1;
//     }
    
//     if (currentFloor == requestedFloor) {
//         printf("Already here.\n");
//         return 0;
//     }
    
//     if (requestedFloor > currentFloor) {
//         floorsMoved = requestedFloor - currentFloor;
//         energyUsage = 2 * floorsMoved; 
//         printf("Movement direction: Up\n");
//     } else {
//         floorsMoved = currentFloor - requestedFloor;
//         printf("Movement direction: Down\n");
//     }
    
//     if (floorsMoved > 10) {
//         printf("Cooling delay, please wait.\n");
//     }
//     printf("Number of floors moved: %d\n", floorsMoved);
    
//     if (energyUsage > 0) {
//         printf("Energy usage: %.2f units\n", energyUsage);
//     } else {
//         printf("No energy usage while going down.\n");
//     }
    
//     return 0;
// }


// 6. u have to simulate the lock pattern verfication system using loops . if the number is even and divisible by 4 it contributes to +3 points. if the number is odd and a prime number it contributes +5 points. if the number is negative then the system immediately stop processing further inputs. if the number is 0 then the system skip it without processing . you  have to determine whether the lock can be unoclocked or not. the lock opens only if the total score is atleast 30.
// input will be sequence n and n space integers
// output should be : 1. locked or unlocked and the the total score ; 2. access denied ; 3. threat detected
// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
// int isPrime(int num) {
//     if (num <= 1) return 0;
//     for (int i = 2; i <= sqrt(num); i++) {
//         if (num % i == 0) return 0;
//     }
//     return 1;
// }
// int main() {
//     int n, i, score = 0;
    
//     printf("Enter the number of inputs: ");
//     scanf("%d", &n);
    
//     int *numbers = (int *)malloc(n * sizeof(int));
    
//     printf("Enter the numbers: ");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &numbers[i]);
//     }
    
//     for (i = 0; i < n; i++) {
//         if (numbers[i] < 0) {
//             printf("Threat detected.\n");
//             free(numbers);
//             return 0;
//         } else if (numbers[i] == 0) {
//             continue;  
//         } else if (numbers[i] % 2 == 0 && numbers[i] % 4 == 0) {
//             score += 3;
//         } else if (numbers[i] % 2 != 0 && isPrime(numbers[i])) {
//             score += 5;
//         }
//     }
    
//     free(numbers);
    
//     if (score >= 30) {
//         printf("Unlocked. Total score: %d\n", score);
//     } else {
//         printf("Locked. Total score: %d\n", score);
//     }
    
//     return 0;
// }



// enter a string check if it is palindrome or not
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     int len, i, isPalindrome = 1;
    
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
    
//     str[strcspn(str, "\n")] = '\0';
    
//     len = strlen(str);
    
//     for (i = 0; i < len / 2; i++) {
//         if (str[i] != str[len - i - 1]) {
//             isPalindrome = 0;
//             break;
//         }
//     }
    
//     if (isPalindrome) {
//         printf("The string is a palindrome.\n");
//     } else {
//         printf("The string is not a palindrome.\n");
//     }
//     return 0;
// }


// find whether two strings are equal or not without using library functions
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str1[100], str2[100];
//     int i, isEqual = 1;
    
//     printf("Enter first string: ");
//     fgets(str1, sizeof(str1), stdin);
    
//     printf("Enter second string: ");
//     fgets(str2, sizeof(str2), stdin);
    
//     str1[strcspn(str1, "\n")] = '\0';
//     str2[strcspn(str2, "\n")] = '\0';
    
//     for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
//         if (str1[i] != str2[i]) {
//             isEqual = 0;
//             break;
//         }
//     }
    
//     if (isEqual) {
//         printf("The strings are equal.\n");
//     } else {
//         printf("The strings are not equal.\n");
//     }
    
//     return 0;
// }




// // count the alphabetic characters, digits and special characters in a string
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     int i, alphaCount = 0, digitCount = 0, specialCount = 0;
    
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
    
//     str[strcspn(str, "\n")] = '\0';
    
//     for (i = 0; str[i] != '\0'; i++) {
//         if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
//             alphaCount++;
//         } else if (str[i] >= '0' && str[i] <= '9') {
//             digitCount++;
//         } else {
//             specialCount++;
//         }
//     }
    
//     printf("Alphabetic characters: %d\n", alphaCount);
//     printf("Digits: %d\n", digitCount);
//     printf("Special characters: %d\n", specialCount);
    
//     return 0;
// }


// count how many vowels and consonants are there in a string
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     int i, vowelCount = 0, consonantCount = 0;
    
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
    
//     str[strcspn(str, "\n")] = '\0';
    
//     for (i = 0; str[i] != '\0'; i++) {
//         if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
//             if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
//                 str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//                 vowelCount++;
//             } else {
//                 consonantCount++;
//             }
//         }
//     }
    
//     printf("Vowels: %d\n", vowelCount);
//     printf("Consonants: %d\n", consonantCount);
    
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     int i , a[10], n, pos=0,neg=0;
//     for (int i = 0;i<10;i++) {
//         scanf("%d",&a[i]);
    
//     if (a[i]<0) {
//         neg++;
//     }
//     else {
//         pos++;
//     }
//     }
//     printf("%d\n%d",pos,neg);
//     return 0;
// }




// Write a C program to reverse an array using pointers. Implement a function that takes a pointer to the array and its size as 
// arguments and reverses the array in place. 
// #include <stdio.h>
// void reverseArray(int *arr, int size) {
//     int start = 0;
//     int end = size - 1;
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// int main() {
//     int arr[100], size, i;
    
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
    
//     printf("Enter %d elements:\n", size);
//     for (i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     reverseArray(arr, size);
    
//     printf("Reversed array:\n");
//     for (i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }


// #include <stdio.h>
// void reversedarray(int *arr, int size) {
//     int start = 0;
//     int end = size - 1;
//     while (int start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// int main() {
//     int arr[100],size,i;
//     scanf("%d",&size);
//     for (i=0;i<size;i++) {
//         scanf("%d",&arr[i]);
//     }
//     reversearray(arr,size);
//     scanf("%d",&arr[i]);
//     for (int i = 0;i<size;arr[i]){
//         printf("%d",arr[i]);
//     }
//     return 0;
// }



// Design a C program that takes input from the user for a 5-element array and generates a password based on the addition of the 
// differences between successive elements (result should be positive integer, if negative then convert it into positive integer) using 
// pointer. The password is addition of cube of each digit of the result. The program should perform the following steps: 
// 1. The user inputs 5 integers to populate the array. 
// 2. Calculate the differences between successive elements of the array. 
// 3. Calculate the sum of these differences. If calculated sum is negative then convert it into positive number. 
// 4. Generate a password based on the sum obtained in step 3, which is addition of cube of each digit of the sum (in step 3).
// #include <stdio.h>
// #include <math.h>
// int calculatePassword(int sum) {
//     int password = 0;
//     while (sum > 0) {
//         int digit = sum % 10;
//         password += pow(digit, 3); // Cube of the digit
//         sum /= 10; // Remove the last digit
//     }
//     return password;
// }  
// int main() {
//     int arr[5], i, sum = 0;
    
//     printf("Enter 5 integers:\n");
//     for (i = 0; i < 5; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     for (i = 1; i < 5; i++) {
//         int diff = arr[i] - arr[i - 1];
//         if (diff < 0) {
//             diff = -diff; // Convert to positive if negative
//         }
//         sum += diff;
//     }
    
//     int password = calculatePassword(sum);
    
//     printf("Password: %d\n", password);
    
//     return 0;
// }


// find the sum of digits using recursion
// #include <stdio.h>
// int sumOfDigits(int n) {
//     if (n == 0) {
//         return 0;
//     } else {
//         return (n % 10) + sumOfDigits(n / 10);
//     }
// }
// int main() {
//     int number;
    
//     printf("Enter a number: ");
//     scanf("%d", &number);
    
//     int sum = sumOfDigits(number);
    
//     printf("Sum of digits: %d\n", sum);
    
//     return 0;
// }

// #include <stdio.h>
// int sumofdigits(int n) {
//     if (n==0) {
//         return 0;
//     }
//     else {
//         return (n%10) + sumofdigits(n/10);
//     }
// }
// int main() {
//     int number;
//     printf("NUmber: ");
//     scanf("%d",&number);
//     int sum=sumofdigits(number);
//     printf("Sum: %d\n",sum);
//     return 0;
// }



// Create a countdown timer for a fitness workout that counts down from a user-defined number of seconds and displays each second 
// in real-time. 
// #include <stdio.h>
// #include <unistd.h> // For sleep function
// int main() {
//     int seconds;
    
//     printf("Enter the countdown time in seconds: ");
//     scanf("%d", &seconds);
    
//     for (int i = seconds; i >= 0; i--) {
//         printf("%d\n", i);
//         sleep(1); // Sleep for 1 second
//     }
    
//     printf("Time's up!\n");
    
//     return 0;
// }

// #include <stdio.h>
// #include <unistd.h>
// int main() {
//     int seconds;
//     scanf("%d",&seconds);
//     for (int i = seconds; i>=0;i--) {
//         printf("%d\n",i);
//         sleep(1);
//     }
//     printf("Time's up!\n");
//     return 0;
// }


// A cinema hall wants to display its seating chart. Each row has 5 seats. Write a program to take the number of rows as input and 
// display the seats as row numbers followed by seat numbers. 
// #include <stdio.h>
// int main() {
//     int rows, i, j;
//     printf("ENter the number of rows:");
//     scanf("%d",&rows);
//     for (i=1;i<=rows;i++) {
//         printf("Row %d:",i);
//         for (j=1;j<=5;j++) {
//             printf(" %d",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// A parking lot charges a fee based on the number of hours a car is parked. The first 3 hours are free, and each additional hour costs 
// ₹50. Write a program using a do-while loop to calculate the fee for multiple cars until the user stops.
// #include <stdio.h>
// int main() {
//     int car, hour, fee;
//     char choice;
//     do {
//         scanf("%d",&car);
//         scanf("%d",&hour);
//         if (hour<=3) {
//             fee=0;        
//         }
//         else {
//             fee = (hour-3)*50;
//         }
//         printf("Fee for car %d is %d\n",car,fee);
//         printf("Do you want to continue? (y/n): ");
//         scanf(" %c", &choice); // Note the space before %c to consume any newline character
//     }
//     while (choice == 'y' || choice == 'Y');
//     return 0;
// }



// check if the number is armstrong or not
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int num, temp, sum = 0, n, i;   
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     n = num;
//     temp = num;
//     while (temp != 0) {
//         temp /= 10;
//         n++;
//     }
//     temp = num;
//     while (temp != 0) {
//         i = temp % 10;
//         sum += pow(i, n);
//         temp /= 10;
//     }
//     if (sum == num)
//     printf("%d is an Armstrong number.\n", num);
//     else
//     printf("%d is not an Armstrong number.\n", num);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main() {
//     int num,temp,n,i,sum=0;
//     scanf("%d",&num);
//     temp = num;
//     n = num;
//     while (temp !=0) {
//         temp /=10;
//         n++;
//     }
//     temp = num;
//     while(temp !=10){
//         i = temp % 10;
//         sum += pow (i,n);
//         temp /= 10;
//     }
//     if (sum == num) {
//         printf("ArmstrongNumber\n",num);
//     }
//     else {
//         printf("NotArmstrongNumber\n",num);
//     }
//     return 0;
// }   




// Write a C program to determine the roots of a quadratic equation of the form ax2+bx+c=0ax^2 + bx + c = 0ax2+bx+c=0. The 
// program should: 
 
 
// 1. Accept the coefficients a, b, and c as input. 
// 2. Check if the discriminant (D=b2−4acD = b^2 - 4acD=b2−4ac) is: 
// o Positive (real and distinct roots), 
// o Zero (real and equal roots), or 
// o Negative (complex roots). 
// 3. Print the appropriate message along with the roots.
// #include <stdio.h>
// #include <math.h>
// int main() {
//     int a, b, c;
//     float D, root1, root2, realPart, imaginaryPart;
//     printf("Enter coefficients a, b and c: ");
//     scanf("%d %d %d", &a, &b, &c);
//     D = b * b - 4 * a * c;
//     if (D > 0) {
//         root1 = (-b + sqrt(D)) / (2 * a);
//         root2 = (-b - sqrt(D)) / (2 * a);
//         printf("Roots are real and distinct.\n");
//         printf("Root 1 = %.2f\n", root1);
//         printf("Root 2 = %.2f\n", root2);
//     } else if (D == 0) {
//         root1 = root2 = -b / (2 * a);
//         printf("Roots are real and equal.\n");
//         printf("Root 1 = Root 2 = %.2f\n", root1);
//     } else {
//         realPart = -b / (2 * a);
//         imaginaryPart = sqrt(-D) / (2 * a);
//         printf("Roots are complex.\n");
//         printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
//         printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>
// int main() {
//     int a,b,c;
//     float D , x1, x2, realPart, imaginaryPart;
//     printf("Enter coefficients of a,b,c: ");
//     scanf("%d %d %d\n",&a,&b,&c);
//     D = (b*b) - (4*a*c);
//     if (D>0) {
//         x1 = -b + sqrt(D) / (2*a);
//         x2 = -b - sqrt(D) / (2*a);
//         printf("Roots are real and distinct.");
//         printf("x1: %.2f\n",x1);
//         printf("x2: %.2f\n",x2);
//     }
//     else if (D==0) {
//         x1 == x2 == -b / (2*a);
//         printf("Both roots are equal.");
//         printf("x1 = x2 : %.2f\n",x1);
//     }
//     else {
//         realPart = -b / (2*a);
//         imaginaryPart = sqrt(-D) / (2*a);
//         printf("The roots are complex.");
//         printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
//         printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
//     }
//     return 0;
// }



// eligible to vote or not
// #include <stdio.h>
// int main() {
//     int age;
//     printf("Enter your age: ");
//     scanf("%d",&age);
//     if (age >= 18) {
//         printf("Eligible to vote.\n");
//     }
//     else {
//         printf("Not eligible to vote.\n");
//     }
//     return 0;
// }


// leap year or not
// #include <stdio.h>
// int main() {
//     int year;
//     printf("Enter year: ");
//     scnaf("%d",&year);
//     if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//         printf("%d is a leap year.\n",year);
//     }
//     else {
//         printf("%d is not a leap year.\n",year);
//     }
//     return 0;
// }



// Write a C program that evaluates a mathematical expression based on user input. The expression is defined as: 
// result=a+b∗c/d−e 
// Where a, b, c, d, and e are integers entered by the user. The program must do the following: 
// 1. Evaluate the expression with the default operator precedence, which follows the standard mathematical rules (multiplication 
// and division are performed before addition and subtraction). 
// 2. Modify the expression to explicitly control the order of operations using parentheses. In this case, addition and subtraction 
// should be performed first, followed by multiplication and division. 
// 3. Display both results clearly to the user. 
// INPUT FORMAT: 
// Five integers, a, b, c, d, and e, entered by the user, where d is non-zero to avoid division by zero. 
//  OUTPUT FORMAT: 
// The program should display: 
// 1. The result of the expression using the default operator precedence. 
// 2. The result of the expression with explicitly controlled precedence using parentheses.
// #include <stdio.h>
// int main() {
//     int a,b,c,d,e (d != 0);
//     printf("Enter five integers: ");
//     scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
//     if (d == 0) {
//         "division by 0 not allowed.\n"; 
//         return 1;
//     }
//     else {
//         int result1 = a + b * c / d - e;
//         int result2 = (a + b) * (c / d) - e;
//         printf("Result with default precedence: %d\n",result1);
//         printf("Result with controlled precedence: %d\n",result2);
//     }
//     return 0;
// }




// sum of n natural numbers using recursion
// #include <stdio.h>
// int sum(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     else {
//         return n + sum(n-1);
//     }
// }
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     printf("Sum of first %d natural numbers is: %d\n",n,sum(n));
//     return 0;
// }


// factorial of n
// #include <stdio.h>
// int factorial(int n) {
//     if (n == 0) {
//         return 1;   
//     }
//     else {
//         return fact(n-1)*n;
//     }
// }
// int main() {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     printf("Factorial of %d is : %d\n",n,fact(n));
//     return 0;
// }

// convert celsius to fahrenheit
// #include <stdio.h>
// float celsiustoFahrenheit(float celsius) {
//     float fahrenheit = (celsius * 9/5) + 32;
//     return fahrenheit;
// }
// int main() {
//     float celsius;
//     printf("Enter the temperature in celsius: ");
//     scanf("%d",&celsius);
//     printf("Temperature in fahrenheit is: %f\n",celsiustoFahrenheit(c));
//     return 0;
// }


// percentage of marks of maths, science nd english 
// #include <stdio.h>
// int calculatePercentage(int maths, int science, int english) {
//     int total = maths + science + english;
//     int percentage = (total/3);
//     return percentage;
// }
// int main() {
//     int calculatePercentage(int maths, int science, int english) {
//         int maths, science, english;
//         printf("Enter marks of maths: ");
//         scanf("%d",&maths);
//         printf("Enter marks of science: ");
//         scanf("%d",&science);
//         printf("Enter marks of english: ");
//         scanf("%d",&english);
//         int percentage = calculatePercentage(maths, science, english);
//     }
//     return 0;
// }


// fibonacci series
// #include <stdio.h>
// int fibonacciseries (int n) {
//     if (n <= 0){
//         printf("Input should be positive integer.");
//     }
//     else if (n == 1) {
//         return 0;
//     }
//     else if (n == 2) {
//         return 1;
//     }
//     else {
//         return fibonacciseries(n-1) + fibonacciseries(n-2);
//     }
// }
// int main() {
//     int n;
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);
//     printf("Fibonacci series up to %d terms is: ",n);
//     return fibonacciseries(n);
// }



// POINTERS
// syntax : int *ptr = &x            // * = value of address    ||    & = address of value
// int _x = *ptr       // check kro pointer mai kya memory address hai .... then us memory address mai dekho kya value haii .. jo value usme hogi .. vo value new memory address mai jakr store ho jyegiii.

// #include <stdio.h>
// int main() {
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr;

//     printf("%d", _age);
//     return 0;
// }


// DECLARING POINTERS
// int *ptr
// char *ptr
// float *ptr


// FORMAT SPECIFIER
// printf("%p",&age)     // &age = address         || %p = memory address of pointer
// print("%p",ptr)      // ptr = address
// printf("%p",&ptr)   // &ptr = address of pointer


// VALUE AT ADDRESS 
// format specifier
// prinft("%d",age)
// printf("%d",*ptr)     // *ptr = value at address
// printf("%d",*(&age))  // &age = address         || *(&age) = value at address



// Practice question
// #include <stdio.h>
// int main() {
//     int *ptr;
//     int x;

//     ptr = &x;
//     *ptr = 0; // *ptr = x = 0

//     printf("x = %d\n",x);
//     printf("*ptr = %d\n",*ptr);

//     *ptr += 5;
//     printf("x = %d\n",x);
//     printf("*ptr = %d\n",*ptr);

//     (*ptr)++;
//     printf("x = %d\n",x);
//     printf("*ptr = %d\n",*ptr);
// }



//  POINTER to POINTER
// syntax : int **pptr
// char **pptr
// float **pptr

// #include <stdio.h>
// int main() {
//     float price = 100.00;
//     float *ptr = &price;
//     float **pptr = &ptr;
//     return 0;
// }


// Ques. Print the value of i from its pointer to pointer
// #include <stdio.h>
// int main() {
//     int i = 5;
//     int *ptr = &i;
//     int **pptr = &ptr;
//     printf("%d\n",**pptr);
//     return 0;
// }




// POINTERS IN FUNCTION CALL
// 1. call by value - we pass value of variable as argument
// 2. call by reference - we pass address of variable as argument


// #include <stdio.h>
// void square(int n);
// void _square(int* n);

// int main() {
//     int number = 4;
//     square(number);
//     printf("Number = %d\n",number);

//     _square(&number);
//     printf("Number = %d\n",number);
//     return 0;
// }
// // call by value
// void square (int n) {
//     n = n*n;
//     printf("Square = %d\n",n);
// }
// // call by reference
// void _square(int* n){
//     *n = *n * *n;
//     printf("Square = %d\n",*n);
// }


// Ques . Swap 2 numbers a & b
// swap ke liye hmesha ek 3rd variable ko introduce kro ... 3rd variable is temporary variable .... temp / t
// call by value se swapping nhi hogi .... swapping hogi call by reference se
// #include <stdio.h>
// void swap (int a, int b);
// void _swap(int* a, int* b);

// int main() {
//     int x = 3, y = 5;
//     swap(x,y);

//     int x = 3, y = 5;
//     _swap(&x,&y);
//     return 0;
// }


// // call by value
// void swap (int a, int b) {
//     int t = a;
//     a = b;
//     b = t;
//     printf("a = %d & b = %d",a,b);
// }

// // call by reference 
// void _swap (int* a, int* b) {
//     int t = *a;
//     *a = *b;
//     *b = t;
//     printf("a = %d & b = %d",*a,*b);
// }


// Write a function to calculate the sum , product & average of 2 numbers. Print that average in main function
// #include <stdio.h>
// void sum_product_average(int a, int b, int* sum, int* product, int* average);
// int main() {
//     int a = 3, b = 5;
//     int sum, product, average;
//     sum_product_average(a,b,&sum,&product,&average);
//     printf("Sum = %d\n",sum);
//     printf("Product = %d\n",product);
//     printf("Average = %f\n",average);
//     return 0;
// }
// void sum_product_average(int a, int b, int* sum, int* product, int* average) {
//     *sum = a+b;
//     *product = a*b;
//     *average = (*sum)/2;
// }



// Ques. write a c program to find the maximum number b/w two numbers using pointer
// #include <stdio.h>
// void max(int* a,int* b) {
//     if (*a > *b) {
//         printf("%d is greater\n",*a);
//     }
//     else {
//         printf("%d is greater\n",*b);
//     }
// }


// Ques. print all the letters in english alphabet using pointer
// #include <stdio.h>
// void print_alphabet(char* alphabet) {
//     while (*alphabet != '\0') {
//         printf("%c ",*alphabet);
//         alphabet++;
//         }
// }
// int main() {
//     char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
//     print_alphabet(alphabet);
//     return 0;
// }


// Ques. print elements of array in reverse order
// #include <stdio.h>
// void print_reverse(int* arr, int size) {
//     int i;
//     for (i = size - 1; i >=0; i--) {
//         printf("%d ",*arr);
//         arr++;
//         }
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     print_reverse(arr, 5);
//     return 0;
// }










// ARRAYS
// collection of similar data types stored at contiguous memory location
// Syntax : int marks[5]
// char name[10]
// float price[2]



// Pointer Arithmetic
// 1. incrementing a pointer
// int age = 22;
// int *ptr = &age;
// ptr++; // Incrementing the pointer to point to the next integer location


// 2. decrementing a pointer
// int age = 22;
// int *ptr = &age;
// ptr--; // Decrementing the pointer to point to the previous integer location


// 3. subtracting two pointers
// int age1 = 22;
// int age2 = 25;
// int *ptr1 = &age1;
// int *ptr2 = &age2;
// int diff = ptr2 - ptr1; // Difference in the number of elements between the two pointers
// printf("Difference: %d\n", diff); // Prints the difference in number of elements


// 4. comparing two pointers
// int age1 = 22;
// int age2 = 25;
// int *ptr1 = &age1;
// int *ptr2 = &age2;
// if (ptr1 > ptr2) {
//     printf("ptr1 points to a higher memory address than ptr2\n");
// } else if (ptr1 < ptr2) {
//     printf("ptr1 points to a lower memory address than ptr2\n");
// } else {
//     printf("ptr1 and ptr2 point to the same memory address\n");
// }
// }






// Array is a Pointer
// int *ptr = &arr[0]; // Pointer to the first element of the array
// int *ptr = arr; // Pointer to the first element of the array



// Arrays as Function Arguments

// 1. Function Declaration

// void printnumbers(int arr[],int n);
//              OR
// void printnumbers(int *arr,int n);


// 2. Function Call
// printnumbers(arr,n);


// #include <stdio.h>
// void printNumbers(int arr[],int n) {
//     for (int i = 0;i<n;i++) {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     printNumbers(arr,6);
//     return 0;
// }




// MULTIDIMENSIONAL ARRAYS

// 1. 2D Array
// int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

// Ques. Write a function to count the number of odd numbers in an array
// #include <stdio.h>
// int countOddNumbers(int arr[], int size) {
//     int count = 0;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] % 2 != 0) {
//             count++;
//         }
//     }
//     return count;
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int oddCount = countOddNumbers(arr, size);
//     printf("Number of odd numbers: %d\n", oddCount);
//     return 0;
// }


// Ques. Write a function to reverse an array
// #include <stdio.h>
// void reverseArray(int arr[], int size) {
//     int start = 0;
//     int end = size - 1;
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
    
//     reverseArray(arr, size);
    
//     printf("Reversed array:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }


// Ques. Write a program to store the first n fibonacci numbers
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of Fibonacci numbers to generate: ");
//     scanf("%d", &n);
    
//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;
    
//     for (int i = 2; i < n; i++) {
//         fib[i] = fib[i - 1] + fib[i - 2];
//     }
    
//     printf("Fibonacci series:\n");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", fib[i]);
//     }
    
//     return 0;
// }


// Ques. Create a 2D array, storing the tables of 2 and 3
// #include <stdio.h>
// int main() {
//     int table[2][10];
//     int i, j;
//     for (i = 0; i < 2; i++) {
//         for (j = 0; j < 10; j++) {
//             if (i == 0) {
//                 table[i][j] = 2 * (j + 1);
//             } else {
//                 table[i][j] = 3 * (j + 1);
//             }
//         }
//     }
//     printf("Table of 2:\n");
//     for (i = 0; i < 10; i++) {
//         printf("2 x %d = %d\n", i + 1, table[0][i]);
//     }
//     printf("\nTable of 3:\n");
//     for (i = 0; i < 10; i++) {
//         printf("3 x %d = %d\n", i + 1, table[1][i]);
//     }
//     return 0;
// }







// STRINGS 
// a character array terminated by null character (\0)
// null character denotes the end of string
// Syntax: char name[] = {'R','a','j','\0'};

// Ques. Create a string firstName & lastName to store the details of user & print all the characters using a loop
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char firstName[20];
//     char lastName[20];
    
//     printf("Enter first name: ");
//     fgets(firstName, sizeof(firstName), stdin);
    
//     printf("Enter last name: ");
//     fgets(lastName, sizeof(lastName), stdin);
    
//     // Remove newline character from the strings
//     firstName[strcspn(firstName, "\n")] = '\0';
//     lastName[strcspn(lastName, "\n")] = '\0';
    
//     printf("First Name: %s\n", firstName);
//     printf("Last Name: %s\n", lastName);
    
//     return 0;
// }



// String using Pointers
// char *str = "hello world";   // can be reinitialized
// store string in memory & the assigned address is stored in the char points 'str'
// char str[] = "hello world";  // cannot be reinitialized

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char *canChange = "hello world";
//     puts(canChange);
//     canChange = "hello";
//     puts(canChange);
//     return 0;
// }


// array ko modify nahi kar sakte


// Ques. make a program that input user's name &print its length
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char name[20];
//     printf("Enter ur name: ");
//     fgets(name, sizeof(name), stdin);
//     int length = strlen(name);
//     printf("Length of name: %d\n", length);
//     return 0;
// }


// Library functions for string handling
// use <string.h>

// string handling functions:
// 1. strlen - finds the length of a string
// 2. strcat - concatenates one string at the end of another
// 3. strcmp - compares two stringd lexicographically
// 4. strcpy - copies one string from another

// 1. strlen() -  finding and printing length of string s
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s[] = "hello";
//     printf("%lu",strlen(s));
//     return 0;
// }

// 2. strcpy() function copies a string from the source to the destinantion. It copies the entire string, including the null terminator.
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char src[]="Hello World";
//     char dest[20];
//     strcpy(dest,src);
//     printf("%s",dest);
//     return 0;
// }

// 3. strncpy - copy till a particular position
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char src[]="Welcome, Hello World";
//     char dest[20];
//     strncpy(dest,src,4);
//     printf("%s",dest);
//     return 0;
// }

// 4. strcat() - used to concatenate (append) one string to the end of another.
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s1[30]="Welcome, ";
//     char s2[]="Chitkara University";
//     strcat(s1,s2);
//     printf("%s",s1);
//     return 0;
// }

// 5. strncat() - concatenate till a particular position
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s1[30]="Welcome, ";
//     char s2[]="How are you";
//     strncat(s1,s2,4);
//     printf("%s",s1);
//     return 0;
// }

// 6. strcmp() - take two strings as arguments , compares two strings and returns an integer value as a result of comparison.
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s1[]="Mangoes";
//     char s2[]="mango";
//     int res = strcmp(s1,s2);
//     if (res==0) printf("s1 and s2 are same");
//     else if (res<0) printf("s1 is smaller than s2");
//     else printf("s1 is greater than s2");
//     return 0;
// }

// 7. strchr() - used to locate the first occurence of a character in a string
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s[] ="Hello world";
//     char *res = strchr(s,'l');
//     if (res!=NULL)
//     printf("Character found at: %ld index", res-s);
//     else printf("Character not found\n");
//     return 0;
// }

// 8. strrchr() - used to find the last occurence of a character in a string
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s[] ="Hello world";
//     char *res = strrchr(s,'l');
//     if (res!=NULL)
//     printf("Character found at: %ld index", res-s);
//     else printf("Character not found\n");
//     return 0;
// }

// 9. strstr() - used to search the first occurence of substring in another string
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[] ="hello, world, world";
//     char *pos = strstr(s,"world");
//     if (pos!=NULL) printf("Found");
//     else printf("Not Found");
//     return 0;
// }

// 10. strtok() - used to split a string into tokens 
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s[] = "Hello, How are you!";
//     char *t = strtok(s, ", ");
//     while (t!=NULL) {
//         printf("%s\n",t);
//         t = strtok(NULL, ", ");
//     }
//     return 0;
// }


// Ques. Find the salted form of a password entered by user if the salt is "123" & added at the end
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char password[100], salted_password[100];
//     char salt[] = "123";
//     printf("Enter your password: ");
//     fgets(password, sizeof(password), stdin);
//     // Concatenate the salt to the password
//     strcpy(salted_password, password);
//     strcat(salted_password, salt);
//     printf("Salted password: %s\n", salted_password);
//     return 0;
// }


// Ques. Write a function named slice, which takes a string & returns a sliced string from index n to m
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s[] = "Hello, How are you!";
//     char *slice(char *s, int n, int m) {
//         return &s[n];
//         }
//     char *slice = slice(s, 7, 12);
//     printf("Sliced string: %s\n", slice);
//     return 0;
// }


// Ques. write a function to count the occurence of vowels in a string
// #include <stdio.h>
// #include <string.h>
// int countVowels(char *str) {
//     int count = 0;
//     char *vowels = "aeiouAEIOU";
//     while (*str != '\0') {
//         if (strchr(vowels, *str) != NULL) {
//             count++;
//         }
//         str++;
//     }
//     return count;
// }
// int main() {
//     char str[100];
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0'; // Remove newline character
//     int vowelCount = countVowels(str);
//     printf("Number of vowels: %d\n", vowelCount);
//     return 0;
// }



// Ques. Check if a given character is present in a string or not
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     char ch;
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);
//     str[strcspn(str, "\n")] = '\0'; // Remove newline character
//     printf("Enter a character to search: ");
//     scanf("%c", &ch);
    
//     if (strchr(str, ch) != NULL) {
//         printf("Character '%c' is present in the string.\n", ch);
//     } else {
//         printf("Character '%c' is not present in the string.\n", ch);
//     }
    
//     return 0;
// }










// STRUCTURES
// a collection of values of different data types
// Syntax : struct structure_name {
//     data_type member1;
//     data_type member2;
//     data_type member3;
// };

// eg : struct student {
// char name[100];
// int roll;
// float cgpa;
// };
// struct student s1;
// s1.cgpa = 7.5;

// Two types of data types :
// 1. inbuilt data types - int, char, float, double
// 2. user defined data types - struct, union, enum


// #include <stdio.h>
// int main() {
//     struct student {
//         char name[100];
//         int roll;
//         float cgpa;
//     };
//     struct student s1;
//     printf("Enter name: ");
//     fgets(s1.name, sizeof(s1.name), stdin);
//     s1.name[strcspn(s1.name, "\n")] = '\0'; // Remove newline character
//     printf("Enter roll number: ");
//     scanf("%d", &s1.roll);
//     printf("Enter CGPA: ");
//     scanf("%f", &s1.cgpa);
    
//     printf("Name: %s\n", s1.name);
//     printf("Roll Number: %d\n", s1.roll);
//     printf("CGPA: %.2f\n", s1.cgpa);
    
//     return 0;
// }


// Structures in Memory : structures are stored in contiguous memory location


// Ques. Write a program to store the details of 3 students using structure
// #include <stdio.h>
// #include <string.h>
// int main() {
//     struct student {
//         char name[100];
//         int roll;
//         float cgpa;
//     };
//     struct student s[3];
//     int i;
//     for (i = 0; i < 3; i++) {
//         printf("Enter name of student %d: ", i + 1);
//         fgets(s[i].name, sizeof(s[i].name), stdin);
//         s[i].name[strcspn(s[i].name, "\n")] = '\0'; // Remove newline character
//         printf("Enter roll number of student %d: ", i + 1);
//         scanf("%d", &s[i].roll);
//         printf("Enter CGPA of student %d: ", i + 1);
//         scanf("%f", &s[i].cgpa);
//         getchar(); // Clear the newline character from the input buffer
//     }
//     printf("\nStudent Details:\n");
//     for (i = 0; i < 3; i++) {
//         printf("Name: %s\n", s[i].name);
//         printf("Roll Number: %d\n", s[i].roll);
//         printf("CGPA: %.2f\n", s[i].cgpa);
//         printf("\n");
//    }
//     return 0;
// }


// Array of Structures
// struct student ECE[100];
// struct student CSE[100];
// struct student ME[100];

// IT[0].roll = 200;
// IT[0].cgpa = 8.5;


// Initializing Structures
// struct student s1 = {"sharma",1664,8.5};
// struct student s2 = {"raj",1665,8.6};
// struct student s3 = {0};

// #include <stdio.h>
// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main() {
//     struct student s1 = {1664,8.9,"raj"};
//     printf("student roll = %d\n",s1.roll);
//     return 0;
// }



// Pointers to Structures
// struct student s1;
// struct student *ptr;
// ptr = &s1;

// #include <stdio.h>
// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };
// int main() {
//     struct student s1 = {1664, 8.9, "raj"};
//     struct student *ptr = &s1;
//     printf("student roll = %d\n",(*ptr).roll);
//     return 0;
// }


// Ques . Enter address (house no.,block,cit,state) of 5 people
// #include <stdio.h>
// #include <string.h>
// int main() {
//     struct address {
//         char houseNo[20];
//         char block[20];
//         char city[20];
//         char state[20];
//     };
//     struct address people[5];
//     int i;
//     for (i = 0; i < 5; i++) {
//         printf("Enter address of person %d:\n", i + 1);
//         printf("House No: ");
//         fgets(people[i].houseNo, sizeof(people[i].houseNo), stdin);
//         people[i].houseNo[strcspn(people[i].houseNo, "\n")] = '\0'; // Remove newline character
//         printf("Block: ");
//         fgets(people[i].block, sizeof(people[i].block), stdin);
//         people[i].block[strcspn(people[i].block, "\n")] = '\0'; // Remove newline character
//         printf("City: ");
//         fgets(people[i].city, sizeof(people[i].city), stdin);
//         people[i].city[strcspn(people[i].city, "\n")] = '\0'; // Remove newline character
//         printf("State: ");
//         fgets(people[i].state, sizeof(people[i].state), stdin);
//         people[i].state[strcspn(people[i].state, "\n")] = '\0'; // Remove newline character
//     }
// }



// Dynamic Memory Allocation
// allocate memory to a data structure during runtime
// malloc() - allocate memory
// calloc() - allocate memory & initialize to 0
// realloc() - reallocate memory
// free() - free the allocated memory

// 1. malloc() - takes no. of bytes to be allocated & return a pointer of type void
// eg : ptr = (int*)malloc(5*sizeof(int)); // allocate memory for 5 integers

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *ptr;
//     ptr = (int *)malloc(5*sizeof(int));

//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;

//     for (int i = 0;i<5;i++) {
//         printf("%d",ptr[i]);
//     }
//     return 0;
// }


// Ques. Write a program to allocate memory to store 5 prices
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     float *price;
//     price = (float*)malloc(5*sizeof(float));
//     if (price == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
//     ptr[0] = 10.5;
//     ptr[1] = 20.5;
//     ptr[2] = 30.5;
//     ptr[3] = 40.5;
//     ptr[4] = 50.5;
//     for (int i = 0; i < 5; i++) {
//         printf("Price %d: %.2f\n",price[i]);
//     }
//     return 0;
// }



// 2. calloc() - continuous allocation of memory | initializes with 0
// eg : ptr = (int*)calloc(5,sizeof(int));

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *ptr;
//     ptr = (int*)calloc(5,sizeof(int));
//     if (ptr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }

//     for (int i = 0;i<3;i++) {
//         printf("%d",ptr[i]);
//     }
//     return 0;
// }
  

// Ques. WAP to allocate memory of size n, where n is entered by the user
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *ptr;
//     int n;
//     printf("ENter the size of array: ");
//     scanf("%d",&n);
//     ptr = (int*)calloc(n,sizeof(int));

//     for (int i = 0;i<n;i++) {
//         printf("%d",ptr[i]);
//     }
//     return 0;
// }


// 3. free() - use it to free the memory that is allocated using malloc nd calloc
// syntax : free(ptr);

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *ptr;
//     ptr = (int*)malloc(5*sizeof(int));
//     for (int i = 0;i<5;i++) {
//         printf("%d",ptr[i]);
//     }
//     free(ptr); // Free the allocated memory

//     ptr = (int*)malloc(2*sizeof(int)); // Reallocate memory
//     for (int i = 0;i<2;i++) {
//         printf("%d",ptr[i]);
//     }
//     return 0;
// }


// 4. realloc() - used to reallocate (increase or decrease) memory using the same pointer & size
// syntax : realloc(ptr, new_size);


// Ques. ALlocate memory for 5 integers, then reallocate it to 8 numbers
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *ptr;
//     ptr = (int *)calloc(5,sizeof(int));
//     printf("Enter numbers(5): ");
//     for (int i = 0;i<5;i++) {
//         scanf("%d",&ptr[i]);
//     }
//     ptr = realloc(ptr, 8);
//     printf("Enter numbers(8): ");
//     for (int i = 0;i<8;i++) {
//         scanf("%d",&ptr[i]);
//     }
//     for (int i = 0;i<8;i++) {
//         printf("%d",ptr[i]);
//     }
//     return 0;
// }


// Ques. Create an array of size5 (using calloc) & enter its values from the user
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *ptr;
//     ptr = (int*)calloc(5,sizeof(int));
//     printf("Enter numbers(5): ");
//     for(int i = 0;i<5;i++) {
//         scanf("%d",&ptr[i]);
//     }
//     for(int i = 0;i<5;i++) {
//         printf("%d ",ptr[i]);
//     }
//     return 0;
// }



// Ques. Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even numbers
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//     int *ptr;
//     ptr = (int*)calloc(5,sizeof(int));
//     printf("First 5 odd numbers: ");
//     for(int i = 1;i<= 10;i+=2) {
//         printf("%d ",i);
//     }
//     ptr = realloc(ptr, 6*sizeof(int));
//     printf("\nFirst 6 even numbers: ");
//     for(int i = 2;i<= 12;i+=2) {
//         printf("%d ",i);
//     }
//     return 0;
// }





// Armstrong number
// #include <stdio.h>
// #include <math.h>
// int isArmstrong(int num) {
//     int originalnum = 0;
//     int sum = 0;
//     int digits = 0;
//     while (originalnum!=0) {
//         originalnum /= 10;
//         digits++;
//     }
//     originalnum = num;
//     while(originalnum != 0) {
//         int digit = originalnum%10;
//         sum += pow(digit,digits);
//         originalnum /= 10;
//     }
//     if (sum == num) {
//         return 1; // Armstrong number
//     } else {
//         return 0; // Not an Armstrong number
//     }
// }
// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     if (isArmstrong(num)) {
//         printf("%d is an Armstrong number.\n", num);
//     } else {
//         printf("%d is not an Armstrong number.\n", num);
//     }
//     return 0;
// }



// Transpose of a matrix
// #include <stdio.h>
// int main() {
//     int i,j,rows,cols;
//     printf("Enter the number of rows and columns: ");
//     scanf("%d %d",&rows, &cols);

//     int matrix[100][100], transpose[100][100];
//     printf("Enter the elements of the matrix: \n");
//     for (i=0;i<rows;i++) {
//         for (j=0;j<cols;j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     for (i=0;i<rows;i++) {
//         for (j=0;j<cols;j++) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }
//     printf("Transpose of matrix: \n");
//     for (i=0;i<cols;i++) {
//         for (j=0;j<rows;j++) {
//             printf("%d ",transpose[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }