#include <stdio.h>
#include "arrays.h"

//compila essa biblioteca primeiro
// gcc -c arrays.c
//ls para ver se apareceu um arrays.o
// agora compila o main.c
//gcc main.c arrays.o
//./a.out
int main(void) {
  //Declaração das variáveis,ponteiros, vetores e matrizes
  //Declaração Vetor
  int *va,*vb,*vc;
  //Declaração matrizes
  int **Ma,**Mb,**Mc;
  //Declaração de variáveis
  int x,i,j,y,r;
  float v;
  //y=10;

//--------------------------------------------//
//Funções Arrays Unidimensionais
//Chamada das funções
//1-Função VetorAlloc
  printf("Vetores:");
  printf("\n");
  scanf("%d",&x);
  scanf("%d",&y);
  va = vetorAlloc(x);
  vb = vetorAlloc(x);
  //print do retorno da função
  for ( i = 0; i < x; i++) {
     printf("%d ",va[i]);
  }
  printf("\n");
  printf("\n");
//--------------------------------------------//
//2-Função SetValue

  vetorSetValue(va,x,y);
  //print do retorno da função
  for ( i = 0; i < x; i++) {
     printf("%d ",va[i]);
  }
  printf("\n");
  printf("\n");

//----------------------------------------//
//3-Função Valor Random

  vetorSetRandom(vb,x);
  //print do retorno da função
  for ( i = 0; i < x; i++) {
     printf("%d ",vb[i]);
  }
  printf("\n");
  printf("\n");
//--------------------------------------------//
//4-Função Adição de vetores

  vc=vetorAdd(va,va,x);
  //print do retorno da função
  for ( i = 0; i < x; i++) {
     printf("%d ",vc[i]);
  }
  printf("\n");
  printf("\n");
//------------------------------------------//
//5-Função Subtração de vetores

  vc=vetorSub(va,va,x);
  //print do retorno da função
  for ( i = 0; i < x; i++) {
     printf("%d ",vc[i]);
  }
  printf("\n");
  printf("\n");

//---------------------------------------//
//6-Função multiplicação de vetores

  vc=vetorMult(va,va,x);
  //print do retorno da função
  for ( i = 0; i < x; i++) {
     printf("%d ",vc[i]);
  }
  printf("\n");
  printf("\n");

//---------------------------------------//
//7-Função Soma valores de um vetor

  v=vetorSum(va,x,y);
  //print do retorno da função
  printf("%.2f ",v);
  printf("\n");
  printf("\n");

//---------------------------------------//
//8-Função Multiplicação de valores de um vetor

  v=vetorProd(va,x);
  //print do retorno da função
  printf("%.2f ",v);
  printf("\n");
  printf("\n");

//---------------------------------------//
//9-Função média valores de um vetor

  v=vetorMean(va,x);
  //print do retorno da função
  printf("%.2f ",v);
  printf("\n");
  printf("\n");

//---------------------------------------//
//10-Função Variância dos valores de um vetor

  v=vetorVar(va,x,v);
  //print do retorno da função
  printf("%.2f ",v);
  printf("\n");
  printf("\n");

//---------------------------------------//
//11-Função Desvio Padrão dos valores de um vetor

  v=vetorDesvioPadrao(v);
  //print do retorno da função
  printf("%.2f ",v);
  printf("\n");
  printf("\n");

//---------------------------------------//
//12-Função Free vetor libera memória alocada

  r=vetorFree(va);
  //print do retorno da função
  printf("%d ",r);
  printf("\n");
  printf("\n");

//---------------------------------------//
//13-Função Imprime um  vetor sem retorno

  vetorPrint(vb,x);
  printf("\n");
//---------------------------------------//
/*Fim Arrays Unidimensionais
*
*
**/
//Arrays Bidimensionais
//1-Função matrizAlloc

  Ma = matrizAlloc(x,y);
  Mb = matrizAlloc(x,y);
  //print do retorno da função
  printf("Matrizes:");
  printf("\n");
  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {

     printf("%d ",Ma [i][j] );
   }
    printf("\n");
  }
  printf("\n");
//---------------------------------------------//
//2-Função matrizSet

  matrizSet(Ma,x,y,x);
  //print do retorno da função
  for (i = 0; i < x; i++) {
   for ( j = 0; j < y; j++) {
     printf("%d ",Ma [i][j]);
   }
   printf("\n");
}
printf("\n");
//----------------------------------------//
//3-Função matrizSetRandom

  matrizSetRandom(Mb,x,y);
  //print do retorno da funçãb
  for (i = 0; i < x; i++) {
   for ( j = 0; j < y; j++) {
     printf("%d ",Mb [i][j]);
   }
   printf("\n");
}
printf("\n");
//----------------------------------------//
//4-Função matrizAdd

  Mc = matrizAdd(Ma,Mb,x,y);
  //print do retorno da função
  for (i = 0; i < x; i++) {
   for ( j = 0; j < y; j++) {
     printf("%d ",Mc [i][j]);
   }
   printf("\n");
}
printf("\n");
//----------------------------------------//
//5-Função matrizSub

  Mc =  matrizSub(Ma,Mb,x,y);
  //print do retorno da função
  for (i = 0; i < x; i++) {
   for ( j = 0; j < y; j++) {
     printf("%d ",Mc [i][j]);
   }
   printf("\n");
}
printf("\n");
//----------------------------------------//
//6-Função matrizMult

  Mc =  matrizMul(Ma,Mb,x,y);
  //print do retorno da função
  for (i = 0; i < x; i++) {
   for ( j = 0; j < y; j++) {
     printf("%d ",Mc [i][j]);
   }
   printf("\n");
}
printf("\n");
//----------------------------------------//
//7-Função matrizMean

  v =  matrizMean(Mb,x,y);
  //print do retorno da função

     printf("%.2f ",v);
     printf("\n");
     printf("\n");
//----------------------------------------//
//8-Função matrizTransposta

  Mc =  matrizTransposta(Mb,x,y);
  //print do retorno da função
  for (i = 0; i < x; i++) {
   for ( j = 0; j < y; j++) {
     printf("%d ",Mc [i][j]);
   }
   printf("\n");
}
printf("\n");
//----------------------------------------//
//9-Função matrizIdentidade

  Mc =  matrizIdentidade(x,y);
  //print do retorno da função
  for (i = 0; i < x; i++) {
   for ( j = 0; j < y; j++) {
     printf("%d ",Mc [i][j]);
   }
   printf("\n");
}
printf("\n");
//----------------------------------------//
//10-Função matrizFree

  r =  matrizFree(Ma);
  //print do retorno da função

   printf("%d ",r);
   printf("\n");
   printf("\n");
//----------------------------------------//
//11-Função matrizPrint

  matrizPrint(Mb,x,y);

//----------------------------------------//

  return 0;
}
