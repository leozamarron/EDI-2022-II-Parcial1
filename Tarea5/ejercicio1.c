#include <stdio.h>

int main()
{
    int minutos, horas;
    

    printf("Introduzca las horas: ");
    scanf("%d", &horas);

    printf("Introduzca los minutos: ");
    scanf("%d", &minutos);


    if( minutos >= 0 && minutos < 60)
    {
        if( horas >= 0 && horas < 12)
        {
            printf("Buenos Días");
        }
        else if (horas >= 12 && horas < 18)
        {
            printf("Buenos Tardes");
        }
        else if (horas >= 18 && horas < 24)
        {
            printf("Buenos Noches");
        }
        else
        {
            printf("La hora no es valida");
        }
    }   
    else
    {
        printf("La horas no es valida");
    }
    return 0;
}