/*
A company insures its drivers in the following cases:
- If the driver is married
- If the driver is unmarried, male & above 30 years of age.
- If the driver is unmarried, female & above 25 years of age.

In all other cases the driver is not insured. If the martial status,
sex and age of the driver are the inputs, write a program to determine 
whether the driver to be insured or not
*/

#include <stdio.h>
int main() {
    char sex, ms;
    int age;

    printf("Enter age, sex, martial status: ");
    scanf("%d %c, %c", &age, &sex, &ms);

    if (ms=='M')
        printf("Driver is insured");
    else
    {
        if(sex == 'M')
        {
            if (age > 30)
                printf("Driver is insured");
            else 
                printf("Driver is not insured");
            
        }
        else
        {
            if (age > 25)
                printf("Driver is insured");
            else
                printf("Driver is not insured");
        }
    }
    return 0;
}