#include <stdio.h>

int main()
{

    int n, contador, menor, local;
    scanf("%d", &n);
    int x[n];
    //criando vari�veis e armazenando quantidade de n�meros que ser� solicitado

    for(contador=0; contador < n; contador++)
    {
        scanf("%d", &x[contador]);
    }
    //armazenando n�meros

    menor = x[0];
    //colocando um valor inicial m�nimo para fazer compara��o

    for (contador=0; contador<n; contador++)
    {
        if(x[contador]<menor)
        {
                menor=x[contador];
                local = contador;
        }
    }
    //comparando com os outros valores para verificar se n�o h� algum n�mero menor e guardando a posi��o do vetor

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", local);








return 0;
}
