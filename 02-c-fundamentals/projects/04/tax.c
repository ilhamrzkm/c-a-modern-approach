/*
* This program is to ask the user for dollar-and-cents amount.
* Then displays the amount with 5% tax added.
*/

#include <stdio.h>

int main(void){
    float amount;

    printf("Enter an amount: $");
    scanf("%f", &amount);


    printf("With tax added: $%.2f\n", amount * 1.05);

    return 0;
}
