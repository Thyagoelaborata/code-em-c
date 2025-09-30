#include<stdio.h>

// Função para troca de variáveis inteiras
void troca(int *a, int *b){
    int temp = *a; // Armazena o valor apontado por 'a' em uma variável temporária
    *a = *b;       // Atribui o valor apontado por 'b' para o endereço de 'a'
    *b = temp;     // Atribui o valor armazenado em 'temp' para o endereço de 'b'
}

int main(){
    int a, b;

    printf("Digite um Numero para troca..: ");
    scanf("%d", &a);

    printf("Digite outro Numero para troca..: ");
    scanf("%d", &b);

    printf("Valores originais: a = %d, b = %d\n", a, b);

    //  1: Chamar a função de troca
    // Passamos os endereços de 'a' e 'b' para a função
    troca(&a, &b);

    //   2: Imprimir os valores, não os endereços
    printf("Valores trocados:  a = %d, b = %d\n", a, b);

    return 0;
}





