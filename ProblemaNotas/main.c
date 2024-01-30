#include <stdio.h>
#include <stdlib.h>

int main()
{
    double Nota1, Nota2, soma;

    printf("Dgite a primeira nota :");
    scanf("%lf", &Nota1);

    printf("Dgite a segunda Nota nota :");
    scanf("%lf", &Nota2);

    soma = Nota1 + Nota2 ;

    if (soma  >= 60) {
        printf("Nota final = %.1lf", soma);
    }

    else {
        printf("Reprovado ");
    }
  return 0 ;
}
