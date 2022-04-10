#include <stdio.h>

int main(){
    int base,altura,area;

    printf("Digite a base do triangulo: ");
    scanf("%d%*c",&base);
    printf("Digite a altura do triangulo");
    scanf("%d%*c",&altura);

    area=(base*altura)/2;

    printf("A area do triangulo e: %d",area);

}
