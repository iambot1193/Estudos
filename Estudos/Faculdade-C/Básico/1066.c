#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, n5, par=0, impar=0, positivo=0, negativo=0;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);
    //criando e armazenando variáveis

    if (n1%2 == 0){par+=1.0;}
        else{impar+=1.0;}
    if (n2%2 == 0){par+=1.0;}
        else{impar+=1.0;}
    if (n3%2 == 0){par+=1.0;}
        else{impar+=1.0;}
    if (n4%2 == 0){par+=1.0;}
        else{impar+=1.0;}
    if (n5%2 == 0){par+=1.0;}\
        else{impar+=1.0;}
    //verificando e somando pares e ímpares

    if(n1>=0){positivo+=1.0;}
        else{negativo+=1.0;}
    if(n2>=0){positivo+=1.0;}
        else{negativo+=1.0;}
    if(n3>=0){positivo+=1.0;}
        else{negativo+=1.0;}
    if(n4>=0){positivo+=1.0;}
        else{negativo+=1.0;}
    if(n5>=0){positivo+=1.0;}
        else{negativo+=1.0;}
    //verificando e somando positivos e negativos

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
    //mostrando resultados

return 0;
}
