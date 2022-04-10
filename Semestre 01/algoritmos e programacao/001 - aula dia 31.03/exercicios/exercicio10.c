#include <stdio.h>

int main(){
    float area,raio;

    printf("Qual o raio do circulo? ");
    scanf("%d%*f",&raio);

    area=3,1415*(raio*raio);

    printf("%f",area);
    
}
