#include<stdio.h>



// numero par ou impar
int main(){
    int num, resto;
    printf("\nDigite um Numero: ");
    scanf("%d", &num);
    resto = num % 2;

    if (resto ==0){
        printf(" Numero er Par..");
    }

    else{
        printf(" Numero er Impar");
    }
    return 0
}
