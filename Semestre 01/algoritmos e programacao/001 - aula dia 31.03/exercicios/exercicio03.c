#include <stdio.h>

int main() {
    int n1,n2,n3,p1,p2,p3,s1,s2,s3,total,media;

    printf("Qual o peso da AValiacao 1:");
    scanf("%d%*c",&p1);
    printf("Qual a nota da Avaliacao 1?");
    scanf("%d%*c",&n1);
    printf("Qual o peso da AValiacao 2:");
    scanf("%d%*c",&p2);
    printf("Qual a nota da Avaliacao 2?");
    scanf("%d%*c",&n2);
    printf("Qual o peso da AValiacao 3:");
    scanf("%d%*c",&p3);
    printf("Qual a nota da Avaliacao 3?");
    scanf("%d%*c",&n3);

    total=p1+p2+p3;
    s1=n1*p1;
    s2=n2*p2;
    s3=n3*p3;
    media=(s1+s2+s3)/total;
    
    printf("%d",media);
}
