#include <stdio.h>

int main(){

    int entrada, horas, minutos, segundos;

    scanf("%d", &entrada);

    horas = entrada / 3600;
    entrada = entrada - (horas*3600);
    minutos = entrada / 60;
    entrada = entrada - (minutos * 60);
    segundos = entrada;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
