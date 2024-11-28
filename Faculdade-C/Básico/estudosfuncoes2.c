#include <stdio.h>
#include <stdbool.h>

bool teste(int n1, int n2);

int main(){

    int n1, n2;
    bool verdadementira;
    scanf("%d %d", &n1, &n2);
    verdadementira = teste(n1, n2);

    printf("\n%d maior que %d?\n\n", n1, n2);

    if(verdadementira)
    {
        printf("verdade\n");
    }
    else
    {
        printf("falso\n");
    }



return 0;
}

bool teste(int n1, int n2)
{
    bool verdadementira;

    if(n1>n2)
    {
        verdadementira = true;
    }
    else
    {
    verdadementira =  false;
    }

return verdadementira;
}
