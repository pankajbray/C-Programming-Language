/*Two numbers are input into two locations C and D.
Write a program to interchange their values.*/

#include <stdio.h>

int main() {
    int C, D, temp;

    //Input values for C and D
    printf("Enter the value for C: ");
    scanf("%d", &C); //Don't forget the &

    printf("Enter the value for D: ");
    scanf("%d", &D);

    printf("\nBefore Interchanging: C = %d, D = %d\n", C, D);

    //Logic: Interchanging using 'temp'
    temp = C; //Step1: C ki value temp me rarkhi
    C = D;    //Step2: D ki value C mein daali
    D = temp; //Step3: Temp (purani C) ki value D me daali

    printf("After Interchanging: C = %d, D = %d\n", C, D);

    return 0;
}