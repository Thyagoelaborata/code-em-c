#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* 7.  Escreva um programa para conter um vetor com 20 posições, preencher cada
posição com números aleatórios entre 1 e 100 e deve conter um menu com as
seguintes opções:
 1. Digitar um número
 2. Mostrar só os números pares
 3. Mostrar só os números ímpares
 4. Mostrar só os números das posições pares do vetor
 5. Mostrar só os números das posições ímpares do vetor
 9. Finalizar
 Obs: criar o vetor global e em cada vez que mostrar o que foi pedido pelo item de menu
digitado, mostrar também o conteúdo de todas as posições do menu.
*/

int vet[20]; //Variavel global

void preencheVetor(){
    int i;
    for (i=0; i<20; i++){
        vet[i] = rand() % 100 + 1;
    }

}

void mostraVetorCompleto(){
    int i;
    printf("\n Vetor Completo");
    for (i= 0; i<20; i++){
        printf("\nvet[%d]....: %d", i, vet [i]);
    }

}



void mostraPosicaoPares(){
    int i;
    printf("\n Posicoes do vetor");
    for (i=0; i<20; i=i+2){
        printf("\nvet[%d]...: %d", i, vet[i]);
    }

}

int main(){
    int num;
    srand(time(NULL)); // muda a semente pela hora do computador

    preencheVetor();
    mostraVetorCompleto();
    mostraPosicaoPares();


    num = rand(); // numero randomico numero aleatorio infinito
    printf("\nNumero gerado...: &d", num);
    num = num & 100; // fica o restro ente 0 e 99 agora
    printf("\nNUmero entre 0-99: &d", num);
    num++;          //entre 1 e 100


}

//pra que usar vetor armazenar mais de um valor na mesma variavel e pode percorre ele de 1 em 1 oq significa .h na importacao das bibliotecas, sao bilbiotecas de funcoes
// pode ter variavel de mesmo nome pode desde que estejam em posicoes diferentes
