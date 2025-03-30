#include <stdio.h>

int main() {

    int nota100, nota50, nota20, nota10, nota5, nota2;
    int moeda1, moeda50, moeda25, moeda10, moeda5, moeda01;
    float entrada;
    int centavos;

    scanf("%f", &entrada);

    centavos = (int)(entrada * 100 + 0.5);

    nota100 = centavos / 10000;
    centavos %= 10000;
    nota50 = centavos / 5000;
    centavos %= 5000;
    nota20 = centavos / 2000;
    centavos %= 2000;
    nota10 = centavos / 1000;
    centavos %= 1000;
    nota5 = centavos / 500;
    centavos %= 500;
    nota2 = centavos / 200;
    centavos %= 200;

    moeda1 = centavos / 100;
    centavos %= 100;
    moeda50 = centavos / 50;
    centavos %= 50;
    moeda25 = centavos / 25;
    centavos %= 25;
    moeda10 = centavos / 10;
    centavos %= 10;
    moeda5 = centavos / 5;
    centavos %= 5;
    moeda01 = centavos;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$100\n", nota100);
    printf("%d nota(s) de R$50\n", nota50);
    printf("%d nota(s) de R$20\n", nota20);
    printf("%d nota(s) de R$10\n", nota10);
    printf("%d nota(s) de R$5\n", nota5);
    printf("%d nota(s) de R$2\n", nota2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$1.0\n", moeda1);
    printf("%d moeda(s) de R$0.50\n", moeda50);
    printf("%d moeda(s) de R$0.25\n", moeda25);
    printf("%d moeda(s) de R$0.10\n", moeda10);
    printf("%d moeda(s) de R$0.05\n", moeda5);
    printf("%d moeda(s) de R$0.01\n", moeda01);

    return 0;
}
