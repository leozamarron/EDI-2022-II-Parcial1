#include <stdio.h>

#define MAX 5

void capturaArreglo(int arr[MAX]);
void imprimeArreglo(int arr[MAX]);
void imprimeArreglosAlReves(int arr[MAX]);


int main()
{
    int arreglo[MAX];

    capturaArreglo(arreglo);
    imprimeArreglo(arreglo);
    imprimeArreglosAlReves(arreglo);

    imprimeAsterisco(arreglo);

    return 0;
}

void imprimeAsteriscos(int arr[MAX])
{
    for(int i = 0; i < MAX; i++)
    {
        printf("*");
    }
}

void imprimeArreglosAlReves(int arr[MAX])
{
    for(int i = MAX - 1; i >= 0; i--)
    {
        printf("%d",arr[i]);
    }
}

void capturaArreglo(int arr[MAX])
{
    for(int i = 0; i < MAX; i++)
    {
        printf("Dame el elmento de la posicion: %d\n", i);
        scanf("%d", &arr[i]);
    }
}

void imprimeArreglo(int arr[MAX])
{
    for(int i = 0; i < MAX; i++)
    {
        printf("%d",arr[i]);
    }
}