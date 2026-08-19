#include "stdio.h"

int main(){

    printf("Hello world!\n\n");

    float op1, op2, result;
    int opr;

    printf("First Operand: ");
    scanf("%f", &op1);
    printf("Second Operand: ");
    scanf("%f", &op2);

    printf("\n 1 - Sum\n 2 - Subtraction\n 3 - multiplication\n 4 - Division\nChoose the operation: ");
    scanf("%d", &opr);

    if (opr == 1){
        result = op1 + op2;
    }
    if (opr == 2){
        result = op1 - op2;
    }
    if (opr == 3){
        result = op1 * op2;
    }
    if (opr == 4){
        if(op2 == 0)
        {
            printf("Impossible divided by 0\n");
            return 0;
        }
        else
        {
            result = op1 / op2;
        }
    }

    printf("\nThe result of the operation is %.2f\n", result );
    

    return 0; 
}