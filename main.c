#include <stdio.h>
#include "src/sum.h"
#include "src/sub.h"
#include "src/mult.h"
#include "src/div.h"

int main(void){
    float num1 = 0.0, num2 = 0.0;
    printf("Insert first number:\n");
    scanf("%f", &num1);

    printf("Insert second number:\n");
    scanf(" %f", &num2);


    printf("Numbers chosen were: %.2f and %.2f\n", num1, num2);
    
    printf("Sum result is: %.2f\n", sumFunc(num1, num2));    
    printf("Subtraction result is: %.2f\n", subFunc(num1, num2));    
    printf("Multiplication result is: %.2f\n", multFunc(num1, num2));    
    printf("Div result is: %.2f\n", divFunc(num1, num2));    
    
    return 0;
}
