#include <stdio.h>

int main() {
    int salbase,salreceber,grat,imp;

    printf("Qual o salario base do funcionario? ");
    scanf("%d%*c",&salbase);

    grat=50;
    imp=(salbase*10/100)-salbase+salbase;
    salreceber=salbase+grat-imp;

    printf(

        "Considerando um salario base de %d, uma gratificacao de %d, e um imposto de 10 porcento, o salario do funcionario vai ser de: %d",
        salbase,grat,salreceber
    );

}