#include <stdio.h>

int n = 21;

int main()
{
    if(n > 10 && n < 20)
        printf("el numero es mayor que diez");
    else if(n == 10)
        printf("el numero es diez");
    else if(n > 20)
        printf("el numero es mayor que veinte");
    else if(n < 10)
        printf("el numero es menor a 10");
    else
        printf("error no hay numero");
    return 0;
}