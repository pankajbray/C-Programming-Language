/*If a five-digit number is input through the keyboard, 
calculate the sum of its digits.*/

#include <stdio.h>
int main() {
    int num, n, d1, d2, d3, d4, d5, sum;

    printf("Enter a five-digit number: ");
    scanf("%d", &num); // Don't forget the &

    n = num; // Number ko safe rakhne ke liye n me copy kiya

    //Step-by-step digit extraction
    d5 = n % 10; //5th digit (Last)
    n = n / 10;  //Last digit remove kiya

    d4 = n % 10; //4th digit (Last)
    n = n / 10;

    d3 = n % 10; //3rd digit (Last)
    n = n / 10;

    d2 = n % 10; //2ndh digit (Last)
    n = n / 10;

    d1 = n % 10; //1st digit (Last)
    n = n / 10;

    // Calculating Sum
    sum = d1 + d2 + d3 + d4 + d5;

    printf("\nTHe sum of digits of %d is: %d\n", num, sum);

    return 0;

    
}