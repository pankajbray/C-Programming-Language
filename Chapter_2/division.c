/*
The marks obtained by a stufent in 5 different subjects are input through the keyboard.
The student gets a division oas per the following rules:
Percentage above or equal to 60 - First Division
Percentage between 50 and 59 - Second Division
Percentage betweem 40 and 49 - Third Division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student.
*/

#include <stdio.h>
int main() {
    int m1, m2, m3, m4, m5, per;

    printf("ENter the marks obtained by the student in 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    per = (m1+ m2 + m3 + m4 + m5) / 5;

    if (per >= 60)
        printf("First Division");
        else  
        { 
            if(per >= 50)
                printf("Second Division");
                else
                {
                    if(per >= 40)
                        printf("Third Division");
                        else
                            printf("SAAT KARORE!, HATTT! BHHENCHHOODDD");
                }
        }       

return 0;
}
