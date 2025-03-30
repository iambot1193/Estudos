#include <stdio.h>



soma(int n1, int n2)
{
int soma = n1+n2;
printf("o resultado da soma entre %d e %d eh: %d", n1, n2, soma);
}

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    soma(n1, n2);


return 0;
}
