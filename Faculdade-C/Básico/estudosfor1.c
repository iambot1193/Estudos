#include <stdio.h>

int main()
{
    int numeros[10], contador;

    for(contador=0; contador<10; contador+=1)
    {
    scanf("%d", &numeros[contador]);
    }

    printf("\n");

    contador = 0;
    for(contador=0; contador<10; contador+=1)
    {
    printf("%d\n", numeros[contador]);
    }


return 0;
}
