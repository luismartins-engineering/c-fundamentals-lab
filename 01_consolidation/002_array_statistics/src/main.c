#include <stdio.h>

int main (){

    int array[10] = {0};
    int lenght = 10;
    float sum = 0;
    float avg = 0;
    int pos = 0, neg = 0, zeros = 0;
    int valid = 0;

    for (int i = 0; i < lenght; i++)
    {
        valid = 0;

        while (!valid)
        {
            printf("Put a number: ");

            if (scanf("%d", &array[i]) != 1)
            {
                printf("is not a valid integer.\n");

                while (getchar() != '\n')
                {
                }
            }
            else
            {
                valid = 1;
            }
        }
    }

    int max = array[0];
    int min = array[0];

    for(int i = 0; i < lenght; i++)
    {
       if(max < array[i])
       {
            max = array[i];
       }

       if(min > array[i])
       {
            min = array[i];
       }

       if(array[i] > 0)
       {
        pos++;
       }
       
       if(array[i] < 0)
       {
        neg++;
       }

       if(array[i] == 0)
       {
        zeros++;
       }

       sum += array[i];
       
    }

    avg = sum / lenght;

    printf("Maximum: %d\n",max);
    printf("Minimum: %d\n",min);
    printf("Sum: %.1f\n",sum );
    printf("Average: %.2f\n",avg );
    printf("Positive values: %d\n",pos);
    printf("Negative values: %d\n",neg);
    printf("Zeros:  %d\n",zeros);
}