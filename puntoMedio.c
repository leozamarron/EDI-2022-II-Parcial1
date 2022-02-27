#include <stdio.h>

void pidePunto(int *x, int *y);
void calculaPunto(int x1, int x2, int y1, int y2, int *xm, int *ym);


int main()
{
    int x1, x2, y1, y2;
    int xm, ym;

    pidePunto(&x1, &y1);
    pidePunto(&x2, &y2);

    calculaPunto(x1, x2, y1, y2, &xm, &ym);


    printf("El punto medio es: (%d,%d)",xm, ym);
}

void pidePunto(int *x, int *y)
{
    printf("x: ");
    scanf("%d", x);

    printf("y: ");
    scanf("%d", y);
}

void calculaPunto(int x1, int x2, int y1, int y2, int *xm, int *ym)
{
    *ym = (y1 + y2)/2;
    *xm = (x1 + x2)/2;
}