#include <stdio.h>

int main ()
{
    int dias, horas, minutos, segundos;

    printf("Dame los dias: ");
    scanf("%d", &dias);

    printf("Dame las horas: ");
    scanf("%d", &horas);

    printf("Dame los minutos: ");
    scanf("%d", &minutos);

    segundos = (60 * minutos) + (3600 * horas) + (86400 * dias);

    printf("%d dia, %d horas y %d minutos son: %d segundos", dias, horas, minutos, segundos);


    return 0;
}