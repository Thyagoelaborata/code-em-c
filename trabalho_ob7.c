#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* 7.  Escreva um programa para conter um vetor com 20 posi��es, preencher cada
posi��o com n�meros aleat�rios entre 1 e 100 e deve conter um menu com as
seguintes op��es:
 1. Digitar um n�mero
 2. Mostrar s� os n�meros pares
 3. Mostrar s� os n�meros �mpares
 4. Mostrar s� os n�meros das posi��es pares do vetor
 5. Mostrar s� os n�meros das posi��es �mpares do vetor
 9. Finalizar
 Obs: criar o vetor global e em cada vez que mostrar o que foi pedido pelo item de menu
digitado, mostrar tamb�m o conte�do de todas as posi��es do menu.
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
