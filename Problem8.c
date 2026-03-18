/*If a five-digit number is input through the keyboard, reverse the number.*/
#include <stdio.h>

int main() {
    int num, rev = 0, rem;

    printf("ENter a 5 digit number: ");
    scanf("%d", &num);

    while(num != 0){
        rev = num % 10 ; //last digit nikalna
        rev = rev * 10 + rem; //reverse banana
        num = num / 10; //number chhota karna
    }

    printf("Reverse number = %d", rev);

    return 0;

}