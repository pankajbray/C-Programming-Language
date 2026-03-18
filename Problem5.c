/*Length and breadth of a rectangle and radius of a circle are input through the keyboard.

Calculate:

Rectangle: Area and Perimeter
Circle: Area and Circumference */

#include <stdio.h>
int main() {
    float length, breadth, radius;
    float rect_area, rect_perimeter;
    float circ_area, circ_circumference;
    float pi = 3.14;

    // --- Inputs for rectangle ---
    printf("Enter Length and Breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);  // Note : Space between %f and using '&'

    // --- Input for Circlec ---
    printf("Enter Radius of Circle: ");
    scanf("%f", &radius);

    // --- Rectangle Calculations ---
    rect_area = length * breadth;
    rect_perimeter = 2 * (length + breadth);

    // --- Circle Calculations ---
    circ_area = pi * radius * radius;
    circ_circumference = 2 * pi * radius;

    // --- Display Results ---
    printf("\n--- RECTANGLE ---");
    printf("\nArea : %.2f", rect_area);
    printf("\nPerimeter : %.2f", rect_perimeter);

    printf("\n\n---- CIRCLE ---");
    printf("\nArea : %.2f", circ_area);
    printf("\nCircumference : %.2f\n", circ_circumference);
    
    return 0;
}
