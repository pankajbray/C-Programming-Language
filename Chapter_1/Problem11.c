/*A cashier has nodenomination required.
10,50 and 100
If the amount to be withdrawn is input,
calculate the number of notes of each denomination rewuired
*/

#include <stdio.h>
int main() {
    int amount, n100, n50, n20, n10, n5, remaining;

    printf("Enter the amount to be withdrawn: ");
    scanf("%d", &amount); //'&' is essential!

    // Calculate 100s
    n100 = amount / 100;
    remaining = amount % 100;

    // Calculate 50s from remaining amount
    n50 = remaining / 50;
    remaining = remaining % 50;

    // Calculate 20s from the remaining amount
    n20 = remaining / 20;
    remaining = remaining % 20;

    // Calculate 10s from remaining amount
    n10 = remaining / 10;
    remaining = remaining %10;

    // Calculate 5s from the remaining amount
    n5 = remaining / 5;

    //Display Results
    printf("\n --- Denomination details ---");
    printf("\nNumber of 100 notes: %d", n100);
    printf("\nNumber of 50 notes: %d", n50);
    printf("\nNumber of 20 notes: %d", n20);
    printf("\nNumber of 10 notes: %d", n10);
    printf("\nNumber of 5 notes: %d\n", n5);

    return 0;

}