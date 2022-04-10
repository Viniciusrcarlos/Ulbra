#include <stdio.h>

int main() {
    int salbase, salreceber,imposto,grat;

    printf("Qual o salario base do funcionario? ");
    scanf("%d%*c",&salbase);

    imposto=(salbase*7/100)-salbase+salbase;
    grat=(salbase*5/100)-salbase+salbase;
    salreceber=salbase+grat-imposto;


    printf(
        
        "Com um salario base de %d, uma gratificacao de 5 porcento, e um imposto de 7 porcento, o funcionario vai receber um total de: %d",
        salbase,salreceber
    );



}
