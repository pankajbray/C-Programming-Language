/*
Marks obtained by a student in five subjects are input through the keyboard.
Find:
Aggregate marks
Percentage
Assume each subject has maximum 100 marks
*/

#include <stdio.h>
int main() {
    float s1, s2, s3, s4,s5, aggregate, percentage;

    printf("Enter marks of 5 subjects *(Max 100 each):\n");

    //Input marks one by one
    printf("Subject 1: ");
    scanf("%f", &s1);
    printf("Subject 2: ");
    scanf("%f", &s2);
    printf("Subject 3: ");
    scanf("%f", &s3);
    printf("Subject 4: ");
    scanf("%f", &s4);
    printf("Subject 5: ");
    scanf("%f", &s5);

    //Calculate Aggregate
    aggregate = s1 + s2 + s3 + s4 +s5;

    //Calculate Percentage (Using 500.0 for float precision)
    percentage = (aggregate / 500.0) * 100.0;

    //Output with 2 decimal places
    printf("\n--------------------------");
    printf("\nAggregate Marks is: %.2f", aggregate);
    printf("\nPercentage is: %.2f%%", percentage);
    printf("\n----------------------\n");

    return 0;

}