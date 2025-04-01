#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int numero;
    struct lista *proximo;
};
typedef struct lista node;

node *inicia_lista()
{
    node *cabeca = (node *)malloc(sizeof(node));
    if (!cabeca)
    {
        printf("Sem espaço em memoria\n");
        exit(1);
    }
    cabeca->proximo = NULL;
    return cabeca;
}

void adicionar_fim(node *cabeca)
{
    node *novo = (node *)malloc(sizeof(node));
    if (!novo)
    {
        printf("Sem memória\n");
        exit(1);
    }
    printf("informe um valor: ");
    scanf("%d", &novo->numero);
    printf("\n");
    novo->proximo = NULL;
    if (cabeca->proximo == NULL)
    {
        cabeca->proximo = novo;
    }
    else
    {
        node *aux = cabeca->proximo;
        while (aux->proximo != NULL)
        {
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }
}

void adicionar_inicio(node *cabeca)
{
    node *novo = (node *)malloc(sizeof(node));
    if (!novo)
    {
        printf("Sem memória\n");
        exit(1);
    }
    printf("informe um valor: ");
    scanf("%d", &novo->numero);
    printf("\n");
    novo->proximo = NULL;
    if (cabeca->proximo == NULL)
    {
        cabeca->proximo = novo;
    }
    else
    {
        novo->proximo = cabeca->proximo;
        cabeca->proximo = novo;
    }
}

void imprime_lista(node *cabeca)
{
    if (cabeca->proximo == NULL)
    {
        printf("Lista vazia!\n\n");
    }
    else
    {
        node *aux = cabeca->proximo;
        while (aux != NULL)
        {
            printf("END: %p\n", aux);
            printf("%d\n", aux->numero);
            printf("Proximo: %p\n\n", aux->proximo);
            aux = aux->proximo;
        }
    }
}

int main()
{

    node *cabeca = inicia_lista();

    int opcao = 1;
    do{
        printf("1 Para inserir no inicio\n");
        printf("2 Para inseir no final\n");
        printf("3 Para imprimir\n");
        printf("0 Para sair\n\n");
        scanf("%d", &opcao);
        printf("\n");

        switch(opcao){
            case 1:
                adicionar_inicio(cabeca);
                break;
            case 2:
                adicionar_fim(cabeca);
                break;
            case 3:
                imprime_lista(cabeca);
                break;
            case 0:
                printf("Opcao 0 selecionada!\n");
                break;
            default:
                printf("Opcao invalida!\n");
                printf("Opcao invalida!\n");
                printf("Opcao invalida!\n\n");
        }
    }while(opcao != 0);

    
    return 0;
}
