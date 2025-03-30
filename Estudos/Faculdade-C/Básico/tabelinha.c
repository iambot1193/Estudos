#include <stdio.h>

int main()
{
    int n1 = 1;
    int contador, contador2;
    int numdesej;

    numdesej = 100;

    while(n1 < numdesej)
    {
        for(contador2 = 0; contador2 < 3; contador2++)
        {
            for(contador = 0; contador < 3; contador++)
                {
                printf("%d ", n1);
                n1++;
                }
            printf("\n");
        }
        contador2 = 0;
    }









return 0;
}

