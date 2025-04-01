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
        printf("Sem memória!\n\n");
        exit(1);
    }
    cabeca->proximo = NULL;

    return cabeca;
}

node *criar_node()
{
    node *novo = (node *)malloc(sizeof(node));
    if (!novo)
    {
        printf("Sem memória!\n\n");
        exit(1);
    }
    printf("Digite o número que deseja armazenar: ");
    scanf("%d", &novo->numero);
    printf("\n");
    novo->proximo = NULL;

    return novo;
}

int lista_vazia(node *cabeca)
{
    if (cabeca->proximo == NULL)
    {
        return 1;
    }
    return 0;
}

void criar_elemento(node *cabeca)
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

void deletar_element(node *cabeca)
{
    int numero_desejado;

    if (lista_vazia(cabeca))
    {
        printf("Lista vazia!\n\n");
    }
    else
    {
        printf("digite o numero que deseja excluir: ");
        scanf("%d", &numero_desejado);
    }

    node *aux = cabeca->proximo;
    node *aux2 =  cabeca;
    while (aux != NULL)
    {
        if (aux->numero == numero_desejado)
        {
            aux2->proximo = aux->proximo;
            printf("\n");
            printf("Numero deletado!\n\n");
            free(aux);
            return;
        }
        aux = aux->proximo;
        aux2 = aux2->proximo;
        
    }
    printf("Numero não encontrado!\n\n");
}

void imprimir(node *cabeca)
{
    if (lista_vazia(cabeca))
    {
        printf("Lista Vazia!\n\n");
    }
    node *aux = cabeca->proximo;
    while (aux != NULL)
    {
        printf("Local: %p\n", aux);
        printf("Numero: %d\n", aux->numero);
        printf("Sucessor: %p\n\n", aux->proximo);
        aux = aux->proximo;
    }
}

int main()
{
    node *cabeca = inicia_lista();
    int opcao;
    while (opcao != 0)
    {
        printf("digite 1 para adicionar\n");
        printf("digite 2 para excluir\n");
        printf("digite 3 para imprimir\n");
        printf("digite 0 para sair\n\n");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 1:
            criar_elemento(cabeca);
            break;
        case 2:
            deletar_element(cabeca);
            break;
        case 3:
            imprimir(cabeca);
            break;
        case 0:
            printf("Saindo!");
            exit(1);
            break;
        default: printf("opção inválida!");
            break;
        }
    }

    return 0;
}