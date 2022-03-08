#include <stdio.h>
void calculaMayorMenor(int *a, int *b, int *c);

int main()
{
    int a, b, c;

    printf("Dame un numero: ");
    scanf("%d", &a);
    printf("Dame otro numero: ");
    scanf("%d", &b);
    printf("Dame otro numero: ");
    scanf("%d", &c);

    calculaMayorMenor(&a, &b, &c);

    printf("a = %d, b = %d, c = %d", a, b, c);

    return 0;
}

void calculaMayorMenor(int *a, int *b, int *c)
{
    if (*a > *b)
    {
        *a = *b;
    }
    else if (*a < *b)
    {
        *a = *c - *a;
    }
    if (*c < 0)
    {
        *c = *c * -1;
    }
}