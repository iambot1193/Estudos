#include <stdio.h>

void soma(int n1,int n2);
// void porque a operação não volta com nenhum valor
// int n1 e int n2 porque declarar o tipo da variável pode ajudar quando der algum erro

int main()
{
    int n1, n2;

    scanf("%d %d", &n1, &n2);
    soma(n1, n2);


return 0;
}

void soma(int n1, int n2){
printf("a soma entre %d e %d resulta em: %d", n1, n2, n1+n2);
}
