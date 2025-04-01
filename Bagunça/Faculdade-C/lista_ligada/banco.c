#include <stdio.h>
#include <stdlib.h>

struct banco // criando estrutura conforme pedida
{
	int numero_conta;
	char nome_cliente[30];
	float saldo;
	struct banco *proximo;
};
typedef struct banco node;

node *inicia_banco()  //criando node e verificando se foi alocado corretamente
{
	node *cabeca = (node *)malloc(sizeof(node));
	if (!cabeca)
	{
		printf("Sem espaC'o em memoria\n");
		exit(1);
	}
	cabeca->proximo = NULL;
	return cabeca;
}

int numero_igual(node *cabeca, node *novo) //evitando duplicatas
{
	node *aux = cabeca->proximo;
	while (aux != NULL)
	{
		if (aux->numero_conta == novo->numero_conta)
		{
			printf("\n!ERRO!\n");
			printf("!ERRO!\n\n");
			printf("Conta ja existente!\n\n");
			return 1;
		}
		aux = aux->proximo;
	}
	return 0;
}
node* adicionar_node(node* cabeca) //criando node e retornando as informações
{
	node *novo = (node *)malloc(sizeof(node));
	if (!novo)
	{
		printf("Sem memoria\n");
		exit(1);
	}
	printf("informe o numero da conta: ");
	scanf("%d", &novo->numero_conta);
	if (numero_igual(cabeca, novo))
	{
		free(novo);
		return NULL;
	}
	else
	{
		printf("informe o nome do cliente: ");
		scanf("%s", novo->nome_cliente);
		printf("informe o saldo da conta: ");
		scanf("%f", &novo->saldo);
		printf("\n");
		novo->proximo = NULL;
		return novo;
	}
}

void adicionar_ordem(node *cabeca)
{
	node* novo = adicionar_node(cabeca);
	if(novo == NULL){
		return;
	}

	if (cabeca->proximo == NULL)
	{
		cabeca->proximo = novo;
	}
	else
	{
		node *aux1 = cabeca->proximo; // auxiliar = cabeca proximo
		node *aux2 = cabeca;		  // auxiliar antes do a1
		while (aux1 != NULL)
		{ // enquanto auxiliar for diferente de null, auxiliar continuar
			if (novo->numero_conta < aux1->numero_conta)
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
			printf("Numero da conta: %d\n", aux->numero_conta);
			printf("Nome do cliente: %s\n", aux->nome_cliente);
			printf("Saldo do cliente: %.2f\n", aux->saldo);
			printf("Proximo: %p\n\n", aux->proximo);
			aux = aux->proximo;
		}
	}
}
void remove_lista(node *cabeca)
{
	if (cabeca->proximo == NULL)
	{
		printf("!Lista esta vazia!\n\n");
	}
	else
	{
		int numero_desejado;
		node *aux = cabeca->proximo;
		node *aux2 = cabeca;
		printf("digite o numero da conta do banco: ");
		scanf("%d", &numero_desejado);
		printf("\n");
		while (aux != NULL)
		{
			if (aux->numero_conta == numero_desejado)
			{
				aux2->proximo = aux->proximo;
				printf("!Conta removida com sucesso!\n\n");
				free(aux);
				return;
			}
			else
			{
				aux2 = aux;
				aux = aux->proximo;
			}
		}
		printf("!Conta nao encontrada!\n\n");
	}
}

int main()
{

	node *cabeca = inicia_banco();

	int opcao = 1;
	do
	{
		printf("1 Para inserir uma conta\n");
		printf("2 Para imprimir\n");
		printf("3 Para remover uma conta\n");
		printf("0 Para sair\n\n");
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
			remove_lista(cabeca);
			break;
		case 0:
			printf("Opcao 0 selecionada!\n");
			break;
		default:
			printf("Opcao invalida!\n");
			printf("Opcao invalida!\n");
			printf("Opcao invalida!\n\n");
		}
	} while (opcao != 0);

	return 0;
}