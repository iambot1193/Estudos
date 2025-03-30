#include <stdio.h>

int main()
{
    double n1, n2, n3, a, b, c;
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    //criando e armazenando variáveis
    if(n1>=n2 && n1>=n3)
        {
            a = n1;
            if(n2>n3){b = n2; c = n3;}
            else{b = n3; c = n2;}
        }
    else if(n2>=n1 && n2>=n3)
        {
            a = n2;
            if(n1>n3){b = n1; c = n3;}
            else{b = n3; c = n1;}
        }
    else if(n3>=n1 && n3>=n2)
        {
            a = n3;
            if(n1>n2){b = n1; c = n2;}
            else{b = n2; c = n1;}
        }
    //organizando em forma decrescente
    if(a >= b+c){printf("NAO FORMA TRIANGULO\n");}
    else{
    if(a*a == (b*b+c*c)){printf("TRIANGULO RETANGULO\n");}
    if(a*a > (b*b+c*c)){printf("TRIANGULO OBTUSANGULO\n");}
    if(a*a < (b*b+c*c)){printf("TRIANGULO ACUTANGULO\n");}
    if(a==b && a==c){printf("TRIANGULO EQUILATERO\n");}
    if(a==b && a!=c || b==c && b!=a){printf("TRIANGULO ISOSCELES\n");}
    }
    //mostrando resutado

return 0;
}

