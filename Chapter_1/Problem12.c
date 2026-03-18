/*If the total selling price of 15 items and 
the total profit is given, calculate the cost price of one item.*/
/*
Logic used:
Cost Price of Ione item = (Total Selling Price - Total Profit) / 15
*/

#include <stdio.h>
int main() {
    float total_sp, total_profit, cost_price_one;

    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &total_sp);

    printf("\nEnter the total profit on 15 items: ");
    scanf("%f", &total_profit);

    cost_price_one = (total_sp - total_profit) / 15;

    printf("The cost price of one item: %.2f", cost_price_one);

    return 0;

}
/*
#include <stdio.h>

int main() {
    float total_sp, total_profit, total_cp, cost_price_one;

    // Input total selling price and profit
    printf("Enter the total selling price of 15 items: ");
    scanf("%f", &total_sp); // Address operator '&' zaroori hai!

    printf("Enter the total profit earned: ");
    scanf("%f", &total_profit);

    // Logic: Total CP = Total SP - Total Profit
    total_cp = total_sp - total_profit;

    // Logic: CP of one item = Total CP / 15
    cost_price_one = total_cp / 15.0;

    // Output with 2 decimal precision
    printf("\n--- Calculation Results ---");
    printf("\nTotal Cost Price: %.2f", total_cp);
    printf("\nCost Price of ONE item: %.2f\n", cost_price_one);

    return 0;
}
*/