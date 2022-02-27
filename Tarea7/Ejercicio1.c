#include <stdio.h>
#include <string.h>
#define L 100

void pideCadena(char *S);
void pideCaracter(char *C);
int imprimeNumeroC(char *string, char caracter);

int main()
{
    char S[L];
    char C;
    int numeroC;

    pideCadena(S);
    pideCaracter(&C);
    numeroC = imprimeNumeroC(S,C);

    printf("Hay %d %c en la cadena",numeroC, C);

    return 0;
}
int imprimeNumeroC(char *string, char caracter)
{
    int contador = 0;
    for (int i = 0; i < L; i++)
    {
        if (string[i] == caracter)
        {
            contador++;
        }
    }
    return contador;
}

void pideCaracter(char *C)
{
    printf("Dame un caracter: ");
    scanf(" %s", C);
}

void pideCadena(char *S)
{
    memset(S, '-', L); //limpia la memoria para que no tenga basura viene de la libreria string.h
    printf("Introduzca el texto: ");
    gets(S);
}