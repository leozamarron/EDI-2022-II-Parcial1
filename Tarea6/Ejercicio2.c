#include <stdio.h>

int imprimeNumeroPerfecto(int n);

int main()
{
    int numero;
    int perfecto;

    do
    {
    printf("Dame un numero: ");
    scanf("%d", &numero);

    perfecto = imprimeNumeroPerfecto(numero);
    
    if (numero != 0)
    {
        if(perfecto == 1)
        {
            printf("El numero es perfecto\n");
        }
        else if(perfecto == 0)
        {
            printf("El numero no es perfecto\n");
        }
        else
        {
            printf("El numero tiene que ser un entero positivo\n");
        }
    }

    } while (numero != 0);
    

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
        else
        {
            perfecto = 0;
        }
        
    }
    else
    {
        perfecto = 2;
    }
    return perfecto;
}