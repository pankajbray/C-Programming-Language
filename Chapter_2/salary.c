/*
Write a program to calculate the salary as per the following table:
Gender
Years of Service
Qualifications
Salary
Male
>= 10
Post-Graduate
15000
>= 10
Graduate
10000
< 10
Post-Graduate
10000
< 10
Graduate
7000
Female
>= 10
Post-Graduate
12000
>= 10
Graduate
9000
< 10
Post-Graduate
10000
< 10
Graduate
6000
*/
#include <stdio.h>
int main() {
    char gen, qual;
    int sal, yos;

    printf("Enter the gender, Year of Service and Qualification: ");
    scanf("%c %d %c", &gen, &yos, &qual);

    if(gen == 'M' && yos >= 10 && qual == 'P')
    printf("Salary: Rs. 15000", sal);

    else if(gen == 'M' && yos >= 10 && qual == 'G')
    printf("Salary: Rs. 10000", sal);

    else if(gen == 'M' && yos < 10 && qual == 'P')
    printf("Salary: Rs. 10000", sal);
    
    else if(gen == 'M' && yos < 10 && qual == 'G')
    printf("Salary: Rs. 7000", sal);

    else if(gen == 'F' && yos >= 10 && qual == 'P')
    printf("Salary: Rs. 12000", sal);

    else if(gen == 'F' && yos >= 10 && qual == 'G')
    printf("Salary: Rs. 9000", sal);

    else if(gen == 'F' && yos < 10 && qual == 'P')
    printf("Salary: Rs. 10000", sal);

    else if(gen == 'F' && yos < 10 && qual == 'G')
    printf("Salary: Rs. 6000", sal);

    
    return 0;
}