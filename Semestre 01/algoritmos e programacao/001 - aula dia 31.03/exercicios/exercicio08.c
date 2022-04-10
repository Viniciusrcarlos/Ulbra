#include <stdio.h>

int main(){
    int deposito,juros,tempo,saldofinal;

    printf("Qual o valor do deposito? ");
    scanf("%d%*c",&deposito);
    printf("Qual a taxa de juros ao ano? ");
    scanf("%d%*c",&juros);

    tempo=1;
    saldofinal=deposito+(deposito*juros/100);

    printf(

        "Ao decorrer de um ano, com um deposito de %d, vai passar a ser: %d",deposito,saldofinal

    );        



}
