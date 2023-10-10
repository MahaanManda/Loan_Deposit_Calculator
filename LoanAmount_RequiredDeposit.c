#include <stdio.h>
#include <stdbool.h>
#include <math.h>



int main() {

    int loanAmount = 0;
    bool isQuit = false;
    double loanAmountAfterCalc = 0;


    while (isQuit != true) {
        printf("Enter a loan amount('-1' to quit): ");
        int inputResult = scanf("%d", &loanAmount);

        if (inputResult != 1) {
            printf("Invalid input. Please enter a valid integer.\n");
            // Clear the input buffer
            while (getchar() != '\n');
            continue;
        }
        if (loanAmount == -1) {
            isQuit = true;
            break;
        }
        else if (loanAmount < 0) {
            printf("Invalid loan amount. Please try again...\n");
        }
        else if (loanAmount < 5000) {
            // 10% of loan value
            loanAmountAfterCalc = loanAmount * 0.10;
            printf("Required Deposit: %lf\n", loanAmountAfterCalc);
        }
        else if (loanAmount < 10000 && loanAmount >= 5000) {
            // 100+ 5% of loan value
            loanAmountAfterCalc = 100 + (loanAmount * 0.05);
            printf("Required Deposit: %lf\n", loanAmountAfterCalc);
        }
        else if (loanAmount <= 20000 && loanAmount >= 10000) {
             //$400+ 3% of loan value
            loanAmountAfterCalc = 400 + (loanAmount * 0.03);
            printf("Required Deposit: %0.2lf\n", loanAmountAfterCalc);
        }
        else if (loanAmount > 20000) {
            printf("Loans in excess of $20000 are not allowed\n");
        }
    }
    














}