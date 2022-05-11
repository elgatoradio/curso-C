#include <stdio.h>

int n = 8;

int main()
{
    do
    {
        printf("n es igual a %d\n", n);
        n = n-1;
    } while (n > 10);

        printf("ya termino el bucle");
    
    return 0;
}