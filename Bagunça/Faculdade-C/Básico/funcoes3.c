#include <stdio.h>

void ordem(int n1, int n2, int n3)
{
    int maior, menor, medio;
    maior = (n1>n2 && n1>n3) ? n1 : (n2>n1 && n2>n3) ? n2 : n3;
    menor = (n1<n2 && n1<n3) ? n1 : (n2<n1 && n2<n3) ? n2: n3;
    medio = (n1>menor && n1<maior) ? n1 : (n2>menor && n2<maior) ? n2 : n3;
    printf("\ndecrescente: %d %d %d \n", maior, medio, menor);
    printf("crescente:   %d %d %d\n", menor, medio, maior);

}

int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    ordem(n1, n2, n3);

return 0;
}
