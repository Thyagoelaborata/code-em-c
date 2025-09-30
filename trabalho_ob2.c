#include<stdio.h>

 /*2.  Crie um programa para ler um n�mero inteiro do teclado e mostrar a soma dos n�meros
contidos entre 0 (zero) e esse n�mero, a soma somente dos n�meros pares e a soma
somente dos n�meros �mpares.*/

int main(){

    //declarando as variaveis
    int numero;
    int soma_total = 0;
    int soma_pares = 0;
    int soma_impar = 0;


    //entrada de dado do usuario e ler
    printf("Digite um numero inteiro..");
    scanf("%d", &numero);

    //loop for para interar de 0 ate o numero digitado
    for(int i = 0; i<= numero; i++){

        // adiciona o numero atual a soma total
        soma_total += i;

        //verifaca se o numero e par usando operador de modulo (%)

        if (i % 2 == 0){
            soma_pares = soma_pares + i; // que e igual a soma_pares +=i
        }else{
            soma_impar += i;
            }
        }
    //mostrar os resultados
    printf("Soma de todos os numero entre 0 %d: %d\n", numero, soma_total);
    printf("Soma dos  numero pares e  %d: %d\n", numero, soma_pares);
    printf("Soma dos numero impares e %d: %d\n", numero, soma_impar);

    return 0 ;
}
