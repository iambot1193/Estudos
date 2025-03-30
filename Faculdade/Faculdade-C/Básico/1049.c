#include <stdio.h>
#include <string.h>

int main()
{
    char coluna[13];
    char tipo[9];
    char comida[11];
    //criando variáveis

    scanf("%s", coluna);
    scanf("%s", tipo);
    scanf("%s", comida);
    //armazenando variáveis

    if(strcmp(coluna,"vertebrado")==0)
        {
            if(strcmp(tipo,"ave")==0)
            {
                if(strcmp(comida,"carnivoro")==0){printf("aguia\n");}
                else{printf("pomba\n");}
            }
            else
            {
                if(strcmp(comida,"onivoro")==0){printf("homem\n");}
                else{printf("vaca\n");}
            }
        }
    else
        {
            if(strcmp(tipo,"inseto")==0)
            {
                if(strcmp(comida,"hematofago")==0){printf("pulga\n");}
                else{printf("lagarta\n");}
            }
            else
            {
                if(strcmp(comida,"hematofago")==0){printf("sanguessuga\n");}
                else{printf("minhoca\n");}
            }
        }
        //verificando valores, mostrando valores e rezando

    return 0;
}
