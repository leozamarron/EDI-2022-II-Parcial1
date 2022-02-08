#include<stdio.h>

int main ()
{
    float descuento;
    float precio, total;

    descuento = 0;


    printf("Dame el precio del producto: ");
    scanf("%f", &precio);

    printf("Dame el porcentaje de descuento del producto: ");
    scanf("%f", &descuento);

    descuento = precio * 0.01 * descuento;
    total = precio - descuento;

    printf("El precio con descuento es: %.2f", total);

    return 0;

}