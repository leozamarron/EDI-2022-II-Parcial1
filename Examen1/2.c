#include <stdio.h>
#include <string.h>
#define N 40

void calculaCadena(char *s);

int main()
{
    char string[N];

    memset(string, '-', N);
    printf("Dame una cadena de texto: ");
    gets(string);

    calculaCadena(string);

    printf("%s", string);

    return 0;
}

void calculaCadena(char *s)
{
    for (int i = 0; i < N; i++)
    {

        switch (s[i])
        {
        case 'a':
            s[i] = 'A';
            break;
        case 'e':
            s[i] = 'E';
            break;
        case 'i':
            s[i] = 'I';
            break;
        case 'o':
            s[i] = 'O';
            break;
        case 'u':
            s[i] = 'U';
            break;
        }

    }
}