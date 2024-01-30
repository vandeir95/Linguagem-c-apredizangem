#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  N  ;
    double Media, soma;

    printf("Quantos numeros voce vai digitar ? :");
    scanf("%d", &N);

    double vet[N];


    for(int i = 0; i < N; i++){
        printf("Digite um numero :");
        scanf("%lf", &vet[i]);


    }

        printf("\nValores: ");
        for(int i = 0; i < N; i++){
            printf("%.1lf ", vet[i]);
        }
       printf("\n");


        soma = 0 ;
        for(int i = 0; i < N; i++){
            soma = soma + vet[i];

        }
       printf("Soma = %.2lf\n", soma);


       Media = soma / N;

       printf("Media = %.2lf", Media);

    return 0;
}
