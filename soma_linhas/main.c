#include <stdio.h>
#include <stdlib.h>
 //n linha
 //m coluna

int main()
{  int n, m ;

printf("Qual a quantidade de linhas da matriz ?");
  scanf("%d", &n );
  printf("Qual a quantidade de colunas da matriz ?");
    scanf("%d", &m );

   double mat[n][m];
   double vet[n];


   for (int i = 0; i < n; i++){
         printf("digite os elementos da %da linha: \n", i + 1);
      for (int j = 0; j < m; j++)  {
         scanf("%lf", &mat[i][j]);
}
   }

   for( int i = 0; i < n; i++  ){
      vet[i] = 0 ;
      for(int j = 0; j < m; j++){
         vet[i] = vet[i] + mat[i][j];
      }
   }

    printf("vetor gerado: \n");
      for(int i = 0; i < n; i++){
         printf("%.1lf\n", vet[i]);
      }

    return 0;
}
