#include <stdio.h>

int opt1 = 1;
int opt2 = 0;


int main()
{
    printf("Este es el menu de Platzi Bar and Pub, elija una: \n");
    printf("Opcion 0 para Platzi Bebidas\n");
    printf("Opcion 1 para Platzi Comidas \n");
    printf("Opcion 2 para Platzi Postres \n");

    switch (opt1)
    {
    case 0:
        printf("Usted eligio la opcion 0, vera nuestro menu de bebidas, elija una: \n");
        printf("Opcion 0 para PlatziCola 0 \n");
        printf("Opcion 1 para PlatziCola con mucha azucar \n");
        printf("Opcion 2 para PlatziPiña Colada 0 \n");
        switch (opt2)
        {
        case 0:
            printf("Usted eligio una PlatziCola 0, mmmm rico");
        break;
        case 1:
            printf("Usted eligio una PlatziCola con mucha azucar, mmmm rico");
        break;
        case 2:
            printf("Usted eligio una PlatziPiña Colada, mmmm rico");
        break;
        default:
            printf("Opcion invalida");
        break;
        }
    break;
    case 1:
        printf("Usted eligio la opcion 1, vera nuestro menu de comidas, elija una: \n");
        printf("Opcion 0 para Enchiladas \n");
        printf("Opcion 1 para Chilaquiles \n");
        printf("Opcion 2 para Sincronizadas \n");
        switch (opt2)
        {
        case 0:
            printf("Usted eligio las enchiladas con el chingos de queso");
        break;
        case 1:
            printf("Usted eligio los chilakiles, ¿crudito perro?");
        break;
        case 2:
            printf("Usted eligio las sincronizadas, andamos light");
        break;
        default:
            printf("Opcion invalida");
        break;
        }
    break;
    case 2:
        printf("Usted eligio la opcion 2, vera nuestro menu de postres, elija una: \n");
        printf("Opcion 0 para Volcan de chocolate \n");
        printf("Opcion 1 para Arroz con leche \n");
        printf("Opcion 2 para Lasagna \n");
        switch (opt2)
        {
        case 0:
            printf("Usted eligio el Volcan de chocolate, en sanos");
        break;
        case 1:
            printf("Usted eligio el Arroz con leche, un clasico");
        break;
        case 2:
            printf("Usted eligio una Lasagna, ¿que?, eso tambien puede ser un postre");
        break;
        default:
            printf("Opcion invalida");
        break;
        }
    break;
    default:
        printf("Opcion invalida");
    break;
    }
    return 0;
}