#include <stdio.h>

enum weekDays { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

enum deck
{
    clubs = 0,
    diamonds = 5,
    hearts = 10,
    spades = 15
} card;
/*se declara todo en la misma linea*/

int main()
{
    enum weekDays today;
    today = Wednesday;
    card = hearts;
    printf("Day %d", today+1 );
    printf(" and Card Power is %d", card );
    printf(" no entiendo el pinshi error :$");
    printf(" y despuesito de recargar se fue el error, me lleva la v#$@");
    return 0;
}