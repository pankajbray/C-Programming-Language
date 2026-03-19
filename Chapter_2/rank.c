/*Another method to show the rank of the student on the basis of percentage of marks obtained in 6 subjects. */
#include <stdio.h>
int main() {
    int m1, m2, m3, m4, m5, per;
    printf("Enter marks obtained in 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    per=(m1+m2+m3+m4+m5)/5;

    if(per>=60)
    printf("1st RANK");

    if((per>=50)&&(per <60))
        printf("2nd RANK");
    if((per>=40)&&(per<50))
        printf("3rd RANK");
    if((per<40))
        printf("FAIL");

    return 0;
}
