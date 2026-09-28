/******************************************************************************

Richiedere ed acquisire in input un numero intero

Stampare a video IN LETTERE il corrispondente giorno della settimana, se è un giorno lavorativo
Stampare a video WEEKEND se non è un giorno lavorativo
Stampare a video NON E' UN GIORNO se il numero non corrisponde a un giorno della settimana

Francesco Harhalup 1s inf3

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("dimmi un giorno della settimana: ");
    scanf("%d", &num);
    
    if(num<=1)
    {
        printf("è un giorno lavorativo");
    }
    else if(num<=2)
    {
        printf("è un giorno lavorativo");
    }
    else if(num<=3)
    {
        printf("è un giorno lavorativo");
    }
    else if(num<=4)
    {
        printf("è un giorno lavorativo");
    }
    else if(num<=5)
    {
        printf("è un giorno lavorativo");
    }
    else if(num<=6)
    {
        printf("è un giorno di weekend");
    }
    else if(num<=7)
    {
        printf("è un giorno di weekend");
    }
    else if(num>8)
    {
        printf("non è un giorno della settimana");
    }
    
    

    return 0;
}









