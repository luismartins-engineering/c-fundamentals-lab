#include <stdio.h>

int main (){

    printf("Hello world");//ola
    int n[9] = {};
    int c = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("\nPut a number: ");
        scanf("%d", &n[c]);
        c++;
    }
    
    printf("%d",n[3]);
}
