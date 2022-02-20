#include <stdio.h>

int main ()
{
    int inferior, superior, numero;

    printf("Dame el limite interior: ");
    scanf("%d", &inferior);

    printf("Dame el limite superior: ");
    scanf("%d", &superior);

    if(superior < inferior)
    {
        printf("Los valores son incorrectos");
        printf("\nLos valores seran intercambiados\n");

        numero = superior;
        superior = inferior;
        inferior = numero;
    }

    numero = inferior;

    while (numero >= inferior && numero <= superior)
    {
        if(numero % 2 == 0)
        printf("El numero par es: %d\n",numero);

        numero++;
    }
    

    return 0;
}