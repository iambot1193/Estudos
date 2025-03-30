#include <stdio.h>

int main()
{
    int arrayes[3][3], contador, cont2;

    for(cont2 = 0; cont2 <3; cont2++)
    {
        for(contador = 0; contador < 3; contador++)
        {
            scanf("%d", &arrayes[contador][cont2]);
        }
    }

    for(cont2 = 0; cont2 <3; cont2++)
    {
        for(contador = 0; contador < 3; contador++)
        {
            printf("%d ", arrayes[contador][cont2]);
        }
        printf("\n");
    }


return 0;
}
