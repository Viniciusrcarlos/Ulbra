#include <stdio.h>

int main(){
    int nota1, nota2, nota3, notatotal;

    printf("Qual foi a primeira nota?");
    scanf("%d%*c",&nota1);
    printf("Qual foi a segunda nota?");
    scanf("%d%*c",&nota2);
    printf("Qual foi a terceira nota?");
    scanf("%d%*c",&nota3);

    notatotal=nota1+nota2+nota3;

	if (notatotal>=6){
		printf("teste");
	}
	
	else{ 
		printf("teste2");
	}

	return 0;
}
