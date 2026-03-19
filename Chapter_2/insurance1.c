/*Insurance of driver using logical operator*/
#include <stdio.h>
int main() {
    char sex, ms;
    int age;

    printf("Enter age, sex, martial status: ");  //sex: M/F, Martial Staus M/U"
    scanf("%d %c %c", &age, &sex, &ms);

    if ((ms == 'M') || (ms == 'U' && sex =='M' && age > 30) || (ms == 'U' && sex == 'F' && age > 25))
        printf("Driver is insured");
    else
        printf("Driver is no insured");
    return 0;    
}