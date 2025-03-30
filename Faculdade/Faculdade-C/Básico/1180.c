#include <stdio.h>

int main()
{

    int n, contador, menor, local;
    scanf("%d", &n);
    int x[n];
    //criando variáveis e armazenando quantidade de números que será solicitado

    for(contador=0; contador < n; contador++)
    {
        scanf("%d", &x[contador]);
    }
    //armazenando números

    menor = x[0];
    //colocando um valor inicial mínimo para fazer comparação

    for (contador=0; contador<n; contador++)
    {
        if(x[contador]<menor)
        {
                menor=x[contador];
                local = contador;
        }
    }
    //comparando com os outros valores para verificar se não há algum número menor e guardando a posição do vetor

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", local);








return 0;
}
