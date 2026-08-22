#include <stdio.h>

int main(){

    int lenght = 10;
    int array[10] = {0};
    int valid = 0;
    int search = 0;
    int count = 0;
    int position[10] = {0};

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

    valid = 0;

    while (!valid)
    {
        valid = 1;

        printf("Search for: ");
        if (scanf("%d", &search) != 1)
        {
            printf("Search number is not a valid integer.\n");
            valid = 0;

            while (getchar() != '\n')
            {
            }
        }
    }

    for (int i = 0; i < lenght; i++)
    {
        if (search == array[i])
        {
            position[count] = i;
            count++;
        }

    }

    printf("Occurrences: %d\n",count);

    printf("Positions: ");

    for (int i = 0; i < count; i++)
    {
        printf("%d ", position[i]);
    }

    printf("\n");
    

    return 0;
}