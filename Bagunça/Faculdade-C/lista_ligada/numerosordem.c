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

int numero_igual(node *cabeca, node *novo)
{
    node *aux = cabeca->proximo;
    while (aux != NULL)
    {
        if (aux->numero == novo->numero)
        {
            printf("!ERRO!\n");
            printf("Este numero ja esta na lista!\n\n");
            return 1;
        }
        aux = aux->proximo;
    }
    return 0;
}

void adicionar_ordem(node *cabeca)
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

    if (numero_igual(cabeca, novo))
    {
        free(novo);
    }
    else
    {
        if (cabeca->proximo == NULL)
        {
            cabeca->proximo = novo;
        }
        else
        {
            node *aux1 = cabeca->proximo; // auxiliar = cabeca proximo
            node *aux2 = cabeca;          // auxiliar antes do a11
            while (aux1 != NULL)
            { // enquanto auxiliar for diferente de null, auxiliar continuar
                if (novo->numero < aux1->numero)
                {
                    novo->proximo = aux1;
                    aux2->proximo = novo;
                    return;
                }
                else
                {
                    aux2 = aux1;
                    aux1 = aux1->proximo;
                }   
            }
            aux2->proximo = novo;
            novo->proximo = NULL;
        }
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
    do
    {
        printf("1 Para inserir um numero\n");
        printf("2 Para imprimir\n");
        printf("3 Para sair\n\n");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 1:
            adicionar_ordem(cabeca);
            break;
        case 2:
            imprime_lista(cabeca);
            break;
        case 3:
            printf("Opcao 0 selecionada!\n");
            break;
        default:
            printf("Opcao invalida!\n");
            printf("Opcao invalida!\n");
            printf("Opcao invalida!\n\n");
        }
    } while (opcao != 3);

    return 0;
}
