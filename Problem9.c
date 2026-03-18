/*If a four-digit number is input through the keyboard, 
find the sum of the first and last digit.*/

#include <stdio.h>
int main(){
    int num, first_digit, last_digit, sum;

    printf("Enter a four digit number: ");
    scanf("%d", &num);  // Address operator & is essential

    // Logic for last digit
    last_digit = num % 10;

    // Logic for first digit
    first_digit = num / 1000;

    // Calculate Sum
    sum = first_digit + last_digit;

    printf("\nFirst Digit: %d", first_digit);
    printf("\nLast Digit: %d", last_digit);
    printf("\nSUm of First and Last Digit: %d\n", sum);

    return 0;
}