#include <stdio.h>
#define N 3
#define M 4

void capturarDatos(int m[][M], int suma[][M]);
void calculaSuma(int m[][M], int suma[][M]);
void imprimeSuma(int suma[][M]);

int main()
{
    int matriz[N][M];
    int suma[N][M];

    capturarDatos(matriz, suma);
    calculaSuma(matriz, suma);
    imprimeSuma(suma);

    return 0;
}

void imprimeSuma(int suma[][M])
{
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < M; i++)
        {
            printf("%d ",suma[j][i]);
        }
        printf("\n");
    }
    
}

void calculaSuma(int m[][M], int suma[][M])
{
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < M; i++)
        {
            
            if ((i-1) >= 0 && i+1 <= M)
            {
                suma[j][i] = m[j][i-1] + suma [j][i];
            }
            if ((j-1) >= 0 && j+1 <= N)
            {
                suma[j][i] = m[j-1][i] + suma [j][i];
            }
            if ((i+1) < M)
            {
                suma[j][i] = m[j][i+1] + suma [j][i];
            }
            if ((j+1) < N)
            {
                suma[j][i] = suma [j][i] + m[j+1][i];
            }
        }
    }
}

void capturarDatos(int m[][M], int suma[][M])
{
    for (int j = 0; j < N; j++)
    {
        for (int i = 0; i < M; i++)
        {
            printf("Dame un numero en (%d.%d): ",j ,i);
            scanf("%d", &m[j][i]);
            suma[j][i] = m[j][i];
        }
        
    }
    
}