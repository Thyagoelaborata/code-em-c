#include<stdio.h>
#include <string.h> // Necessário para funções de string como strlen

/* 3. Crie um programa para ler um número com quatro dígitos e escrever em separado o dígito
que representa a milhar, a centena, a dezena e a unidade.*/

int main(){
     // Declara um array de caracteres para armazenar o número
    char numero_str[5]; // 4 dígitos + 1 caractere nulo de terminação '\0'

    //entrada de dados do usuario
    printf("Digite um numero com 4 digito...");
    scanf("%s", &numero_str);

    //verifica se a string tem exatamente 4 digito
    if(strlen(numero_str) == 4){
        printf("\n--- Digitos separados ---\n");
        printf("Milhar:     %c\n", numero_str[0]); // posiçao 0 do array
        printf("Centena:    %c\n", numero_str[1]); // posiçao 1 do array
        printf("Dezena:     %c\n", numero_str[2]); // posiçao 2 do array
        printf("Unidade:    %c\n", numero_str[3]); // posiçao 3 do array
    }else {
        printf("Erro: O numero digitado nao pussui 4 digitos.\n");
    }


    return 0;
}



