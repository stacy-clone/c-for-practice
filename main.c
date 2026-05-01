#include <stdio.h>
#include <stdlib.h>

int main(){

    int marks;

    printf("Enter your score: ");
    scanf("%d", &marks);

    if (marks<=39){
        printf("Your grade is E\n");
    }
    else if(marks<=49){
        printf("Your grade is D");
    }
    else if(marks<=59){
        printf("Your grade is C");
    }
    else if(marks<=69){
        printf("Your grade is B");
    }
    else if(marks<=100){
        printf("Your grade is A");
    }
    else{
        printf("The marks you entered are invalid");

    return 0;

}
