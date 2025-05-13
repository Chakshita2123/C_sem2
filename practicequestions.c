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