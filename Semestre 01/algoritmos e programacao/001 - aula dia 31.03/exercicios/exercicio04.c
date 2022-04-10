#include <stdio.h>

int main() {
    int salario,novosalario,aumento;

    printf("Qual o salario atual do funcionario? ");
    scanf("%d%*c",&salario);

    aumento=salario*25/100;
    novosalario=salario+aumento;
    
    printf("Considerando um aumento de 25 porcento, o salario aumenta para: %d",novosalario);
}
