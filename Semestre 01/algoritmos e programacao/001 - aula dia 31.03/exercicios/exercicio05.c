#include <stdio.h>

int main() {
    int salario,novosalario,aumentoporc;

    printf("Qual o salario atual do funcionario? ");
    scanf("%d%*c",&salario);
    printf("Qual a porcentagem do aumento?");
    scanf("%d%*c",&aumentoporc);

    novosalario=salario+(salario*aumentoporc/100);

    printf("Considerando um aumento de %d porcento, o salario do funcionario aumenta para: %d",aumentoporc,novosalario);
}
