#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "arrays.h"
//Arrays Unidimensionais
//-----------------------------------------------------------//
//Aloca um vetor com o tamanho passado
int* vetorAlloc(int tam){
   return malloc(tam*sizeof(int));
}
//-----------------------------------------------------------//
//indica um valor para o preenchimento do vetor
void vetorSetValue(int* vetor,int tam,int valor){
  int i;
  for ( i = 0; i < tam; i++) {
    vetor[i] = valor;
  }

}
//---------------------------------------------------------//
//preenche um vetor com valores randomicos
void vetorSetRandom(int* vetor,int tam){
  int i;

  for ( i = 0; i < tam; i++) {
    vetor[i] = rand()%100;
  }

}
//-------------------------------------------------------//
//Adição de vetores
int* vetorAdd(int* vetorA,int* vetorB,int tam){
 int i;
 int *vetorC;
 vetorC=vetorAlloc(tam);

 for ( i = 0; i < tam; i++) {
    vetorC[i] = vetorA[i] + vetorB[i];

 }

return vetorC;
}
//-------------------------------------------------------//
//Subtração de vetores
int* vetorSub(int* vetorA,int* vetorB,int tam){
 int i;
 int *vetorC;
 vetorC = vetorAlloc(tam);

 for ( i = 0; i < tam; i++) {
    vetorC[i] = vetorA[i] - vetorB[i];

 }

return vetorC;
}
//-------------------------------------------------------------//
//Multiplicação de vetores
int* vetorMult(int* vetorA,int* vetorB,int tam){
 int i;
 int *vetorC;
 vetorC = vetorAlloc(tam);

 for ( i = 0; i < tam; i++) {
    vetorC[i] = vetorA[i] * vetorB[i];

 }

return vetorC;
}
//-------------------------------------------------------------//
//Soma dos valores de um  vetor
int vetorSum(int* vetor, int tam, int valor){
 int i;

 for ( i = 0; i < tam; i++) {
    vetor[i] = valor;
    valor++;
 }

 return valor;
}
//-------------------------------------------------------------//
//Multiplicação dos valores de um  vetor
float vetorProd(int* vetor, int tam){
 int i;
 float mult,valores;
 mult=0;
 valores=0;
 for ( i = 0; i < tam; i++) {
    valores+=vetor[i];
    mult = valores * tam;
 }

 return mult;
}
//-------------------------------------------------------------//
//Média dos valores de um  vetor
float vetorMean(int* vetor, int tam){
 int i;
 float media,valores;
 media=0;
 valores=0;
 for ( i = 0; i < tam; i++) {
    valores+=vetor[i];
    media = valores / tam;
 }

 return media;
}
//-------------------------------------------------------------//
//Variância dos valores de um  vetor
float vetorVar(int* vetor, int tam,float media){
 int i;
 float var,valores;
 var=0;
 valores=0;
 for ( i = 0; i < tam; i++) {
    valores+=pow((vetor[i]-media),2);
    var = valores / tam;
 }

 return var;
}
//-------------------------------------------------------------//
//Desvio padrão dos valores de um  vetor
float vetorDesvioPadrao(float var){

 float desvio;

 return desvio = sqrt(var);
}
//-------------------------------------------------------------//
//Função Vetor Free
int vetorFree(int* va){
if (va == NULL) {
  return 1;
 } else {
  free(va);
  return 0;
 }
}
//-------------------------------------------------------------//
//Função Imprime um vetor sem retorno Vetor
int vetorPrint(int* vb,int tam){
 int i;
  for (i = 0; i < tam; i++) {
     printf("%d ", vb[i] );
  }
 printf("\n");
}
//-------------------------------------------------------------//
/*Fim Arrays Unidimensionais
*
*
**/
//Arrays Bidimensionais
//-----------------------------------------------------------//
//Aloca uma matriz com o tamanho passado
int** matrizAlloc(int cols,int rows){
  int i;
  int **Matrix;
  Matrix = malloc(rows*sizeof(int*));
    for (i = 0; i < rows; i++) {

       Matrix[i]= malloc(cols*sizeof(int));


   }
   return Matrix;
}
//-----------------------------------------------------------//
//Seta um valor passado para toda a matriz
void matrizSet(int** Ma,int cols,int rows,int valor){
  int i,j;

    for (i = 0; i < cols; i++) {
      for (j = 0; j < rows; j++) {

       Ma[i][j]= valor;
     }

   }

}
//-----------------------------------------------------------//
//Seta um valor randomico para toda a matriz
void matrizSetRandom(int** Mb,int cols,int rows){
  int i,j;

    for (i = 0; i < cols; i++) {
      for (j = 0; j < rows; j++) {

       Mb[i][j]= rand()%100;
     }

   }

}
//-----------------------------------------------------------//
//Adição entre matrizes
int** matrizAdd(int** Ma,int** Mb,int cols,int rows){
  int i,j;
  int **Matrix;
  Matrix = malloc(rows*sizeof(int*));
   for (i = 0; i < rows; i++) {

     Matrix[i]= malloc(cols*sizeof(int));


   }
    for (i = 0; i < cols; i++) {
      for (j = 0; j < rows; j++) {

       Matrix[i][j] = Ma[i][j] + Mb[i][j];
     }

   }
  return Matrix;
}
//-----------------------------------------------------------//
//Subtração entre matrizes
int** matrizSub(int** Ma,int** Mb,int cols,int rows){
  int i,j;
  int **Matrix;
  Matrix = malloc(rows*sizeof(int*));
   for (i = 0; i < rows; i++) {

     Matrix[i]= malloc(cols*sizeof(int));


   }
    for (i = 0; i < cols; i++) {
      for (j = 0; j < rows; j++) {

       Matrix[i][j] = Ma[i][j] - Mb[i][j];
     }

   }
  return Matrix;
}
//-----------------------------------------------------------//
//Multiplicação entre matrizes
int** matrizMul(int** Ma,int** Mb,int cols,int rows){
  int i,j;
  int **Matrix;
  Matrix = malloc(rows*sizeof(int*));
   for (i = 0; i < rows; i++) {

     Matrix[i]= malloc(cols*sizeof(int));


   }
    for (i = 0; i < cols; i++) {
      for (j = 0; j < rows; j++) {

       Matrix[i][j] = Ma[i][j] * Mb[i][j];
     }

   }
  return Matrix;
}
//-----------------------------------------------------------//
//Valor médio da matriz
float matrizMean(int** Mb,int cols,int rows){
  int i,j,tam;
  float media,somaValores;
  media = 0;
  somaValores = 0;
  tam = 0;
    for (i = 0; i < cols; i++) {
      for (j = 0; j < rows; j++) {

        somaValores+= Mb[i][j];
     }
      tam = cols * rows;
      media = somaValores / tam;
   }
  return media;
}
//-----------------------------------------------------------//
//Transposta da matriz
int** matrizTransposta(int** Mb,int cols,int rows){
  int i,j;
  int **Matrix;
  Matrix = malloc(rows*sizeof(int*));
   for (i = 0; i < rows; i++) {

     Matrix[i]= malloc(cols*sizeof(int));


   }
    for (i = 0; i < cols; i++) {
      for (j = 0; j < rows; j++) {

       Matrix[j][i] = Mb[i][j];
     }

   }
  return Matrix;
}
//------------------------------------------------------------//
//Matriz Identidade
int** matrizIdentidade(int cols,int rows){
  int i,j;
  int **Matrix;
  Matrix = matrizAlloc(cols,rows);

    for (i = 0; i < cols; i++) {

        Matrix[i][i] = 1;
   }
  return Matrix;
}
//------------------------------------------------------------//
//Free Matriz
int matrizFree(int **Ma){

  if (Ma == NULL) {
    return 1;
  } else {
    free(Ma);
    return 0;
  }
}
//------------------------------------------------------------//
//Função Imprime uma matriz sem retorno
int matrizPrint(int** Mb,int cols,int rows){
 int i,j;
 for (i = 0; i < cols; i++) {
   for (j = 0; j < rows; j++) {

    printf("%d ",Mb[i][j]);
  }

 printf("\n");
}

}
//-------------------------------------------------------------//
