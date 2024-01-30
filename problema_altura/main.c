#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N, nmenores;
   double soma, media, PercentualMenores;

   printf("quantas pessoas serao digitadas ? :");
   scanf("%d", &N);

   char Nome[N][50];
   int Idade[N];
   double Altura[N];

       for(int i = 0; i < N; i++){
         printf("dados da %da pessoa :\n ", i + 1 );
         printf("Nome: ");
          fseek(stdin, 0, SEEK_END);
          gets(Nome[i]);
          printf("Idade:");
          scanf("%d", &Idade[i]);
          printf("Altura: ");
          scanf("%lf", &Altura[i]);
       }

       soma = 0 ;
       for(int i = 0; i < N; i++) {
        soma = soma + Altura[i];

       }
       media = soma / N;

       printf("Altura Media: %.2lf\n", media);


       nmenores = 0 ;

         for(int i = 0; i < N; i++) {
          if( Idade[i] < 16 ){
               nmenores =   nmenores + 1 ;
          }

       }



       PercentualMenores = nmenores * 100.0 / N;


       printf("Pessoas com menos de 16 anos: %.1lf %%\n", PercentualMenores);


       for (int i = 0; i < N; i++){
         if (Idade[i] < 16 ) {
            printf("%s\n", Nome[i]);
         }
       }

    return 0;
}
