#include <stdio.h>

int main()
{
    int m,n, menor, maior, soma;
    //criando variáveis

    while(1)
    {
        scanf("%d %d", &m, &n);
        if(m<=0 || n<=0)
        {
            break;
        }
    }
    //lendo valores até registrar um valor <= 0

    if  (m<n)
    {
    menor = m;
    maior = n;
    }
    else
    {
    menor = n;
    maior = m;
    }
    //definindo maior e menor

    soma = 0;


    for (int numero = menor; numero <= maior; i++)
    {
        printf("%d ", i);
        soma += numero;
    }
    //imprime do menor ao maior e soma os numeros

    printf("Sum=%d\n", soma);
    //mostra o resultado


return 0;
}
