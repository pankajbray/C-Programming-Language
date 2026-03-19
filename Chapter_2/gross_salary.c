/*
In a company an employee is paid as under:
If his basic salary is less than Rs. 1500, 
then HRA = Rs. 500 and DA = 98% of basic salary.
If the employee's salary is input through the 
keyboard write a program mto find his gross salary.
*/

#include <stdio.h>
int main() {
    float bs, gs, hra, da;

    printf("Enter the basic salary of employee: " );
    scanf("%f", &bs);

    if (bs < 1500)
    {
        hra = bs * 10 / 100;
        da = bs * 90 / 100;
    }
    else
    {
        hra = 500;
        da = bs * 90 / 100;
    }
    gs = bs + hra + da;
    printf("Gross Salary = Rs. %f", gs);

    return 0;
}