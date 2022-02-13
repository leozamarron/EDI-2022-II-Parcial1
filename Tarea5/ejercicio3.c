#include <stdio.h>

int main()
{
    float a, b, c;


    printf("Dame el lado a del triangulo: ");
    scanf("%f",&a);

    printf("Dame el lado b del triangulo: ");
    scanf("%f",&b);

    printf("Dame el lado c del triangulo: ");
    scanf("%f",&c);


    if(a > 0 && b > 0 && c > 0)
    {
        
        if(a == b)
        {
            if (a == c)
            {
                printf("Es un triangulo equilatero");
            }
            else
            {
                printf("Es un triangulo isosceles");
            }
        }
        else if (a != b)
        {
            if (b != c && a != c)
            {
                printf("Es un triangulo escaleno");
            }
            else printf("Es un triangulo isosceles");
        }
    }
    
    else 
    {
        printf("Valores no validos");
    }
    

    return 0;
}