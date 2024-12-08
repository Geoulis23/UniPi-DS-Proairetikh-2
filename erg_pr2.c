#include <stdio.h>

int main(void){
    printf("0.\tExit\n");
    printf("1.\tAddition\n");
    printf("2.\tSubtraction\n");
    printf("3.\tMultiplication\n");
    printf("4.\tDivision\n");

    printf("Press the number of the desired operation: ");
    int ep;
    scanf("%d", &ep);

    float a, b, result;

    switch (ep){
    case 0:
        break;

    case 1:
        printf("Give the first number: ");
        scanf("%f", &a);
        printf("Give the second number: ");
        scanf("%f", &b);

        result = a+b;
        printf("%.0f+%.0f = %.0f", a, b, result);
        
        break;

    case 2:
        printf("Give the first number: ");
        scanf("%f", &a);
        printf("Give the second number: ");
        scanf("%f", &b);

        result = a-b;
        printf("%.0f-%.0f = %.0f", a, b, result);
        
        break;
    
    case 3:
        printf("Give the first number: ");
        scanf("%f", &a);
        printf("Give the second number: ");
        scanf("%f", &b);

        result = a*b;
        printf("%.0f*%.0f = %.0f", a, b, result);

        break;
    
    case 4:
        printf("Give the first number: ");
        scanf("%f", &a);
        printf("Give the second number: ");
        scanf("%f", &b);

        if (b == 0){
            printf("Undefined");
        }
        else{
            result = a/b;
            printf("%.0f/%.0f = %.2f", a, b, result);
        }
        
        break;
    
    default:
        printf("The number you chose does not meet with any of the available choices");
        
        break;
    }
    
    return 0;
}
