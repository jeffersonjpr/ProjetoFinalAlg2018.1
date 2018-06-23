/*
Devolver o índice i de um dado vetor v com n inteiros tal que v[i]==k ou -1 caso tal
índice inexista. k é dado.
*/

#include <stdio.h>
#include <string.h>

//funçao abaixo nao copie acima
int retInd(int vet[], int tam, int i, int k)
{
  if (i > tam - 1) return -1;
  if (vet[i] == k) return i;
  return retInd(vet, tam, i+1, k);
}
//funçao acima nao copie abaixo

int main(){ //casos testes
  int n[10] = {1,2,3,4,5,6,7,8,9,10};
  printf("%d\n", retInd(n, 10, 0, 5)); // passou
  int m[20] = {51,51,471,58892,8941,98,51,562,51,5812,51,581,581,51,581,3,5,7,58,56};
  printf("%d\n", retInd(m, 20, 0, 581)); // passou
}
