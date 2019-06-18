//aqui ficam os headers das funções que criamos em arrays.c

#include<stdio.h>
#include <stdlib.h>

//Arrays Unidimensionais--------------------------------------
int* vetorAlloc(int tam);
void vetorSetValue(int* vetor,int tam,int valor);
void vetorSetRandom(int* vetor,int tam);
int* vetorAdd(int* vetorA,int* vetorB,int tam);
int* vetorSub(int* vetorA,int* vetorB,int tam);
int* vetorMult(int* vetorA,int* vetorB,int tam);
int vetorSum(int* vetor, int tam, int valor);
float vetorProd(int* vetor, int tam);
float vetorMean(int* vetor, int tam);
float vetorVar(int* vetor, int tam, float media);
float vetorDesvioPadrao(float var);
int vetorFree(int* va);
int vetorPrint(int* vb,int tam);
//-------------------------------------------------------------
//Arrays Bidimensionais ---------------------------------------
int** matrizAlloc(int cols,int rows);
void matrizSet(int** Ma,int cols,int rows,int valor);
void matrizSetRandom(int** Mb,int cols,int rows);
int** matrizAdd(int** Ma,int** Mb,int cols,int rows);
int** matrizSub(int** Ma,int** Mb,int cols,int rows);
int** matrizMul(int** Ma,int** Mb,int cols,int rows);
float matrizMean(int** Mb,int cols,int rows);
int** matrizTransposta(int** Mb,int cols,int rows);
int** matrizIdentidade(int cols,int rows);
int matrizFree(int **Ma);
int matrizPrint(int** Mb,int cols,int rows);
//--------------------------------------------------------------
