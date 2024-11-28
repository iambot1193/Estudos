#include <stdio.h>

int main() {

    int codigoProduto1, codigoProdudo2, quantidadeProduto1, quantidadeProduto2;
    double valorProduto1, valorProduto2, resultado;

    scanf("%d %d %lf", &codigoProduto1, &quantidadeProduto1, &valorProduto1);

    scanf("%d %d %lf", &codigoProdudo2, &quantidadeProduto2, &valorProduto2);

    resultado = (quantidadeProduto1 * valorProduto1) + (quantidadeProduto2 * valorProduto2);

    printf("VALOR A PAGAR: R$ %0.2lf", resultado);

    return 0;
}

