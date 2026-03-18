/*If a five-digit number is input, create a new number by adding 1 to each digit.*/
#include <stdio.h>
int main() {
    int num, n, d1, d2, d3, d4, d5, new_num;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    // Step 1: Extract each digit (Same as Sum of Digits logic)
    d5 = (num % 10 + 1) % 10;
    d4 = (num / 10 % 10 + 1) % 10;
    d3 = (num / 100 % 10 + 1) % 10;
    d2 = (num / 1000 % 10 + 1) % 10;
    d1 = (num / 10000 % 10 + 1) % 10;

    // Step 2: Reconstruct the new number
    new_num = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;

    printf("\nOriginal Number: %d", num);
    printf("\n New Number (after adding 1 to each digit): %d\n", new_num);

    return 0;
}