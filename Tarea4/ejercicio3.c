#include <stdio.h>

int main()
{
    int dias, horas, minutos, segundos;

    printf("Dame los segundos: ");
    scanf("%d", &segundos);

    dias = segundos / 86400;
    segundos = segundos % 86400;

    horas = segundos / 3600;
    segundos = segundos % 3600;

    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("los dias son: %d\n", dias);
    printf("las horas son: %d\n", horas);
    printf("los minutos son: %d\n", minutos);
    printf("los segundos son: %d\n", segundos);

    return 0;
}