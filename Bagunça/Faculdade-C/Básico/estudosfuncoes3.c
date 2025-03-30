#include <stdio.h>

double soma(double n1, double n2)
{
return n1+n2;
}

int main()
{
    double n1, n2, n3;
    scanf("%lf %lf", &n1, &n2);

    printf("resultado = %.1lf", soma(n1, n2));
return 0;
}
