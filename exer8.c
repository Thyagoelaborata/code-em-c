#include<stdio.h>
#define TRUE 1
#define FALSE 0
#include<string.h>
#include<stdlib.h>
#include<conio.h>



/*FUNCAO main
    */

void tela(); // returna nada
int ehPrimo(); // retorn um numero inteir
int potencia();
int decTobin(); // pegar numero decimal e transformar em bin


//variavel global
int nrExecucoes;

int main(){
    int op;
    nrExecucoes  = 0; // no comeco, inicia com

    do{
        system("cls"); // limpa tela
        tela();
        printf("\n+----------------+\n");
        printf("\n| Menu principal |\n");
        printf("\n+---------------=+\n");
        printf("\n 1 - Numero Primo");
        printf("\n 2 - Potencia");
        printf("\n 3 - Decimal para Binario");
        printf("\n 9 - sair");
        printf("\nDigite a opcao...:");
        scanf("%d", &op);

        switch(op){
            case 1: ehPrimo();
                    break;
            case 2: potencia();
                    break;
            case 3: decTobin();
                    break;
            case 9: break;
            default: printf("\nOpcao invalida");
        }

    }while(op !=9);

    printf("\n\nFim do programa\n\n");
    return 0;

}

void tela(){
    printf("\n-------------------------");
    printf("\n  Programa com Funcoes   ");
    printf("\n-------------------------");
}
int ehPrimo(){
    int num, i, flag;
    system("cls");
    tela();
    printf("\n--Funcao ehPrimo ---\n");
    printf("\nDigite o numero para ver se eh Primo");
    scanf("%d", &num);
    flag = TRUE;

    for (i=2; i<num; i++){
        if (num % i == 0){
            flag = FALSE;
        }
    }
    if (flag == TRUE){
        printf("\nO numero eh Primo");
    }
    else{
        printf("\nO numero nao eh primo");
    }
    getch(); // pressione qualquer tecla para continuar
}



int potencia(){
    int base, exp, i, res;
    system("cls)");
    tela();
    printf("--- Funcao potencia ---");

    printf("\nDigite o valor da base...");
    scanf("%d", &base);
    printf("\nDigite o valor do esxpoente...");
    scanf("%d", &exp);
    res = 1;
    for (i=0 ; i<exp; i++){
        res = res * base;
    }
    printf("\n resultado eh...: %d", res);
    getch();
    return res;
}
int decTobin(){
}

