// write a c program with these three conditions
// 1. enter a four digit pin maximum three attempts are allowed after 3 attempts if the entered pin is incorrect then the account will be locked nd it should display incorrect pin try again. 
// 2. enter the balance nd u have to enter the withdrawal amount . in withdrawal there is a condition . withdrawal amount should be a multiple of 100 , if user is not inputing 100 then it should give a error message enter the multiple of 100 . 
// 3. if the withdrawal exceeds the account balance then it should display insufficient balance 
// 4. for a successful transaction update the balance nd print transaction successful

#include <stdio.h>
int main() {
    int pin, enteredpin, attempts = 0, balance, withdrawal;
    printf("Enter a four digit pin: ");
    scanf("%d",&pin);
    while (attempts<3) {
        printf("Enter your pin: ");
        scanf("%d",&enteredpin);
        if (enteredpin==pin) {
            printf("Enter your balance: ");
            scanf("%d",&balance);
            printf("Enter the withdrawal amount: ");
            scanf("%d",&withdrawal);
            if (withdrawal%100!=0) {
                printf("Error: Enter a multiple of 100.\n");
            } else if(withdrawal>balance) {
                printf("Error: Insufficient balance.\n");
            } else {
                balance -= withdrawal;
                printf("Transaction successful. New balance: %d\n", balance);
            } 
            break;
            }
            else {
                attempts++;
                if (attempts<3) {
                    printf("Incorrect pin. Try again.\n");
                } else {
                    printf("Account locked due to too many incorrect attempts.\n");
                }
            }
        }
        return 0;
}
