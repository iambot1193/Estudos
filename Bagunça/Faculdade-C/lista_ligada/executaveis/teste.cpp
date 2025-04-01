#include <stdio.h>
#include <stdlib.h>

struct Lista
{
    int num;
    struct Lista *prox;
};
typedef struct Lista node;

void inicia_lista(node *LISTA){
    LISTA->prox = NULL;
}

void adicionar_lista(node **lista, int valor)
{

    node *novo = (node *)malloc(sizeof(node));
    novo->prox = *lista;
    novo->num = valor;
}

void imprimir_lista(node *Lista)
{
    node *atual = Lista;

    while (atual != NULL)
    {
        printf("%d -> ", atual->num);
        atual = atual->prox;
    }
    printf("NULL\n");
}

int main()
{

    printf("teste");

    return 0;
}