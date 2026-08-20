#include <stdio.h>

int main(){

    printf("Calculator\n\n");

    int op1, op2, result;
    int opr;
    int valid = 0;
    int result_valid = 0;

    while (!valid)
    {
        valid = 1;

        printf("First Operand: ");
        if (scanf("%d", &op1) != 1)
        {
            printf("OP1 is not a valid integer.\n");
            valid = 0;

            while (getchar() != '\n')
            {
            }
        }

        if (valid)
        {
            printf("Second Operand: ");
            if (scanf("%d", &op2) != 1)
            {
                printf("OP2 is not a valid integer.\n");
                valid = 0;

                while (getchar() != '\n')
                {
                }
            }
        }
    }

   
    printf("\n 1 - Sum\n 2 - Subtraction\n 3 - multiplication\n 4 - Division\n 5 - Remainder\nChoose the operation: ");
    scanf("%d", &opr);

    switch (opr)
    {
    case 1:
        result = op1 + op2;
        result_valid = 1;
        break;
    case 2:
        result = op1 - op2;
        result_valid = 1;
        break;
    case 3:
        result = op1 * op2;
        result_valid = 1;
        break;
    case 4:
        if(op2 == 0)
        {
            printf("Impossible divided by 0\n");
        }
        else
        {
            result = op1 / op2;
            result_valid = 1;
        }
        break;
    case 5: 
        if(op2 == 0)
        {
            printf("Impossible divided by 0\n");
        }
        else
        {
            result = op1 % op2;
            result_valid = 1;
        }
        break;
    default:
        printf(" Invalid Choice \n");
        break;
    }

    if (result_valid == 1)
    {
        printf("\nThe result of the operation is %d\n", result );
    }

    
    

    return 0; 
}