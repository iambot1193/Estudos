#include <stdio.h>

int main()
{

    int x, y, n1, n2;
    scanf("%d", &x);
    scanf("%d", &y);
    //criando e armazenando variáveis

    if (x<y)
        {
            n1 = x;
            n2 = y;
        }
    else {n1 = y;n2 = x;}
    //comparando para ver qual o menor e maior valor

    for (int base=n1+1; base<n2; base++)
    {
        if (base%5 == 2 || base%5 == 3)
        {
            printf("%d\n", base);
        }
    }

    return 0;
}
