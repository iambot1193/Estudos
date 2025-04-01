#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int numero;
    int id;
    struct lista *proximo;
};
typedef struct lista node;

verificar_node(node *node)
{
    if (!node)
    {
        printf("Sem memoria\n");
        exit(1);
    }
}

int lista_vazia(node *cabeca)
{
    if (cabeca->proximo != NULL)
    {
        return 1;
    }
    return 0;
}

node *inicia_lista()
{
    node *cabeca = (node *)malloc(sizeof(node));
    verificar_node(cabeca);

    cabeca->proximo = NULL;
    return cabeca;
}

node *criar_node()
{
    node *novo = (node *)malloc(sizeof(node));
    verificar_node(novo);

    printf("digite o numero");
    scanf("%d", novo->numero);
    printf("digite o Saldo");
    scanf("%d", novo->id);
    novo->proximo = NULL;

    return novo;
}

void adicionar_lista(node *cabeca)
{
    node *novo = criar_node();

    if (lista_vazia(cabeca))
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

void remover_lista(node *cabeca)
{
    if (lista_vazia(cabeca))
    {
        printf("Lista vazia!\n");
    }
    else
    {
        int numero_desejado;
        printf("Digite o numero desejado\n");
        scanf("%d", &numero_desejado);

        node *aux = cabeca->proximo;
        node *aux2 = cabeca;
        while (aux->numero != numero_desejado)
        {
            aux = aux->proximo;
            aux2 =  aux2->proximo;
            if(aux->numero == numero_desejado){
                aux2->proximo = aux->proximo;
                free(aux);
            }
        }
        printf("Numero nao encontrado!!\n");
    }
}

imprimir(node *cabeca)
{
    if (lista_vazia(cabeca))
    {
        printf("Lista vazia!\n");
    }
    else
    {
        node *aux = cabeca->proximo;
        while (aux != NULL)
        {
            printf("Atual =  %p", aux);
            printf("int %d", aux->numero);
            printf("id = %d", aux->id);
            printf("Proximo = %p", aux->proximo);
        }
    }
}

int main()
{
    node *cabeca = inicia_lista();
    int opcao;

    while (opcao != 0)
    {
        printf("digite 1 para adicionar\n");
        printf("digite 2 para remover\n");
        printf("digite 3 para imprimir\n");
        printf("digite 0 para sair\n");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 1:
            adicionar_lista(cabeca);
            break;
        case 2:
            remover_lista(cabeca);
            break;
        case 3:
            imprimir(cabeca);
            break;
        case 0:
            printf("Saindo");
            exit(1);
            break;
        default:
            printf("Numero invalido!!!\n");
            break;
        }
    }
    return 0;
}
