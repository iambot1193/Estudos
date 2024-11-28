#include <stdio.h>
#include <locale.h>

void soma(double n1, double n2)
{
printf("a soma de %.2lf e %.2lf resulta em: %.2lf", n1, n2, n1+n2);
}

void menos(double n1, double n2)
{
printf("a subtração de %.2lf e %.2lf resulta em: %.2lf", n1, n2, n1-n2);
}

void vezes(double n1, double n2)
{
printf("a multiplicação de %.2lf e%.2lf resulta em: %lf", n1, n2, n1*n2);
}

void dividido(double n1, double n2)
{
printf("a divisão de %.2lf e %.2lf resulta em: %.2lf", n1, n2, n1/n2);
}


int main(){
setlocale(LC_ALL, "Portuguese_Brazil.1252");


    char tipo;
    double n1, n2;

    printf("qual tipo de operação? + - / * \n");
    scanf("%c", &tipo);

    if(tipo == '+' || tipo == '-' || tipo == '/' || tipo == '*'){
        printf("digite 2 numeros: ");
        scanf("%lf", &n1);
        scanf("%lf", &n2);

        if(tipo == '+'){soma(n1, n2);}
        else if(tipo == '-'){menos(n1, n2);}
        else if(tipo == '/'){dividido(n1, n2);}
        else if(tipo == '*'){vezes(n1, n2);}
    }else{
        printf("Erro!");
    }

return 0;
}
