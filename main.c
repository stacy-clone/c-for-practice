#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, sum, difference, multiplication;
    double division;
    printf("Enter an integer: ");
    scanf("%d", &num1);

    printf("Enter another integer: ");
    scanf("%d", &num2);

    sum= num1 + num2;
    difference= num1 - num2;
    multiplication= num1 * num2;
    division=(double)num1 / num2;

    printf("The sum between %d and %d is %d \n", num1, num2, sum);
    printf("The difference between %d and %d is %d \n", num1, num2, difference);
    printf("The product between %d and %d is %d \n", num1, num2, multiplication);
    printf("The quotient between %d and %d is %f \n", num1, num2, division);

    return 0;

}
