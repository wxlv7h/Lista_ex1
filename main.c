#include <stdio.h>
#define MAX_PRODUTO 5

typedef struct 
{
    int codigo;
    int quantidade;
    float preco;
} Produto ;


int main(){
    Produto produto;

    for(int i = 0; i < MAX_PRODUTO; i++){
        printf("Digite o codigo do produto: ");
        scanf("%d", &produto.codigo);
        printf("Digite a quantidade do estoque: ");
        scanf("%d", &produto.quantidade);
        printf("Digite o preço do produto: ");
        scanf("%f", &produto.preco);
    }

    for(int i = 0; i < MAX_PRODUTO; i++){
        
    }
}