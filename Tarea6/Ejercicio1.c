#include <stdio.h>

int imprimeNumeroPerfecto(int n);

int main()
{
    int numero, perfecto;

    printf("Dame un numero: ");
    scanf("%d", &numero);

    perfecto = imprimeNumeroPerfecto(numero);

    if(perfecto == 1)
    {
        printf("El numero es perfecto");
    }
    else
    {
        printf("El numero no es perfecto");
    }

    return 0;
}



int imprimeNumeroPerfecto(int n)
{
    int suma = 0;
    int perfecto = 0;

    if(n > 0)
    {
        for ( int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                suma = suma + i;
            }
        }

        if(suma == n)
        {
            perfecto = 1;
        }
        
    }
    return perfecto;
}