#include <stdio.h>
#include <string.h>

double soma(double n1, double n2)
{
return n1+n2;
}

double menos(double n1, double n2)
{
return n1-n2;
}

double vezes(double n1, double n2)
{
return n1*n2;
}

double dividido(double n1, double n2)
{
return n1/n2;
}



int main(){

    char texto[101], op[4], numeros[5][25];
    int memoria = 0, contop = 0, connum = 0, cont, resultado;


    printf("digite o calculo com ate 4 operadores (+,-,/,*): ");
    scanf("%s", texto);

    for(cont = 0; cont<100 ; cont++ ){
        if(texto[cont] == '+' || texto[cont] == '-' || texto[cont] == '/' || texto[cont] == '*'){
            switch (texto[cont]){
                case '+': op[contop] = '+';
                    break;
                case '-': op[contop] = '-';
                    break;
                case '/': op[contop] = '/';
                    break;
                default: op[contop] = '*';
                }
            contop++;

            for(memoria; memoria<text[cont]; memoria++)
                {
                    numeros[connum][cont] = texto[memoria]
                }
            connum++;
            memoria++;
        }
    }

    printf("%s = ", texto, );







return 0;
}
