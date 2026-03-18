/*Temperature of a city in Fahrenheit is input through the keyboard.
Convert it into Centigrade.*/

#include <stdio.h>

int main() {
   float farenheit, centigrade;

   //Input: Temperature in Farenheit
   printf("Enter temperature in Farenheit: ");
   scanf("%f", &farenheit); // Remember the '&' operator we discussed!

   //Logic: Applying theh hconversion formula
   // Note: We use 5.0 and 9.0 to ensure floating - point dinvision
   centigrade = (farenheit - 32) * 5.0 / 9.0;

   // Output: Displaying the result
   printf("\n%.2f Farenheit is equal to %.2f Centigrade\n", farenheit, centigrade);

   return 0;
}