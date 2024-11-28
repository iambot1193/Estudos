#include <stdio.h>

int main() {

    char nome[100];
    double salariofixo, vendas, resultado;

    scanf("%s", nome);
    scanf("%lf", &salariofixo);
    scanf("%lf", &vendas);

    resultado = (vendas * 0.15) + salariofixo;
    printf("TOTAL = R$ %.2lf\n", resultado);

    return 0;
}
