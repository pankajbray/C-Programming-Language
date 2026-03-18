/*The distance between two cities (in km) is input through the keyboard.
Convert and print this distance in:

meters

feet

inches

centimeters*/

#include <stdio.h>

int main() {
    float km, meters, feet, inches, centimeters;

    //Input distance in kilometers
    printf("Enter the distance between two cities in Kilometers: ");
    scanf("%f", &km);

    //Convert to other units
    meters = km * 1000;
    feet = km * 3280.84;
    inches = km * 39370.1;
    centimeters = km * 100000;

    //Output results
    printf("Distance in meters : %.2f\n", meters);
    printf("Distance in feet : %.2f\n", feet);
    printf("Distance in inches : %.2f\n", inches);
    printf("Distance in centimeters : %.2\n", centimeters);

    return 0;
}