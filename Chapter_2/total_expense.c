/*While purchasing certain items, a discount of 10%
is offered if the quality purchased is more than 1000.
If quantity and pricce per item are input through the 
keyboard, write a peogram to calculate the total expeses.*/

/*Calculaion of toatl expenses*/ 
#include <stdio.h>

int main() {
    int qty, dis = 0;
    float rate, tot;

    printf("Enter quantity and rate: ");
    scanf("%d %f", &qty, &rate);

    if (qty > 1000)
    dis = 10;

    tot = (qty * rate) - (qty * rate * dis / 100.0);
    printf("Total expenses = Rs. %.2f\n", tot);
    return 0;

}

