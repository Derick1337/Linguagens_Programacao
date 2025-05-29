#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[30];   
    int codigo;      
    double preco;    
} Produto;

typedef struct node {
    Produto produto;
    struct node* next;
} Node;

Node* adicionarProduto(Node* head) {
    Node* novo = (Node*) malloc(sizeof(Node));
    if (!novo) {
        printf("Erro de alocação de memória.\n");
        return head;
    }

    printf("Digite o nome do produto: ");
    scanf(" %[^\n]", novo->produto.nome);

    printf("Digite o código do produto: ");
    scanf("%d", &novo->produto.codigo);

    printf("Digite o preço do produto: ");
    scanf("%lf", &novo->produto.preco);

    novo->next = head;
    return novo;
}

void exibirProdutos(Node* head) {
    Node* atual = head;
    if (!atual) {
        printf("Lista de produtos vazia.\n");
        return;
    }

    printf("\nLista de Produtos:\n");
    while (atual) {
        printf("Nome: %s\n", atual->produto.nome);
        printf("Código: %d\n", atual->produto.codigo);
        printf("Preço: %.2lf\n\n", atual->produto.preco);
        atual = atual->next;
    }
}

void buscarProduto(Node* head) {
    char nomeBusca[30];
    printf("Digite o nome do produto para buscar: ");
    scanf(" %[^\n]", nomeBusca);

    Node* atual = head;
    while (atual) {
        if (strcmp(atual->produto.nome, nomeBusca) == 0) {
            printf("Produto encontrado:\n");
            printf("Nome: %s\n", atual->produto.nome);
            printf("Código: %d\n", atual->produto.codigo);
            printf("Preço: %.2lf\n", atual->produto.preco);
            return;
        }
        atual = atual->next;
    }

    printf("Produto com nome '%s' não encontrado.\n", nomeBusca);
}

void liberarLista(Node* head) {
    Node* atual = head;
    while (atual) {
        Node* temp = atual;
        atual = atual->next;
        free(temp);
    }
}

int main() {
    Node* lista = NULL;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar produto\n");
        printf("2. Exibir todos os produtos\n");
        printf("3. Buscar produto por nome\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                lista = adicionarProduto(lista);
                break;
            case 2:
                exibirProdutos(lista);
                break;
            case 3:
                buscarProduto(lista);
                break;
            case 4:
                liberarLista(lista);
                printf("Memória liberada. Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
