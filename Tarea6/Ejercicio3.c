#include <stdio.h>
#define N 10

void calcularMayorMenor(float *M, float *m);

int main()
{
    float mayor, menor;

    calcularMayorMenor(&mayor, &menor);

    printf("El numero mayor es: %.2f\n", mayor);
    printf("El numero menor es: %.2f", menor);


}

void calcularMayorMenor(float *M, float *m)
{
    float numero;
    int contador;

    contador = 0;

    printf("Dame un numero: ");
    scanf("%f", &numero);

    *M = numero;
    *m = numero;

    while (contador < (N-1))
    {
        printf("Dame otro numero: ");
        scanf("%f", &numero);

        if ( *M < numero)
        {
            *M = numero;
        }
        else if (*m > numero)
        {
            *m = numero;
        }

        contador++;
    }
}