#include <stdio.h>

int main()
{
    float kilos, precio, total;

    printf("Dame el precio por kilo: ");
    scanf("%f", &precio);

    printf("Dame el numero de kilos: ");
    scanf("%f", &kilos);

    total = precio * kilos;

    if (kilos > 0 && kilos <= 2)
    {
        printf("\nEl total es: %.2f", total);
    }
    else if (kilos > 2 && kilos <= 5)
    {
        total = total * 0.9;
        printf("\nEl total es: %.2f", total);
    }
    else if (kilos > 5 && kilos <= 10)
    {
        total = total * 0.85;
        printf("\nEl total es: %.2f", total);
    }
    else if (kilos > 10)
    {
        total = total * 0.8;
        printf("\nEl total es: %.2f", total);
    }
    else
    {
        printf("\nValor incorrecto");
    }
    return 0;
}