#include <stdio.h>
#include "recursividade.h"
//Multiplicação entre dois termos
int mult (int a, int b)
{
  if(b == 1) return a;
  else if(b == 0) return 0;
  return a + mult(a, b - 1);
}

//Potência entre dois termos
int pot(int a,int b){ //a elevado a b
	if(b <= 0) return 1;
	return a*pot(a,b-1);
}

//Fatorial de um número
int fat(int n)
{
  if (n <= 1) return 1;
  return n * fat(n - 1);
}

//Sequência de Fibonacci
int fib(int n){
	if(n <= 1) return 0;
	else if(n <= 3) return 1;
	return fib(n-1) + fib(n-2);
}

//Todos os pares antes de dado número, incluindo o mesmo
void getPares (int n)
{
  if(n == 0)
    printf("0\n");
  else if (n % 2 == 0)
    printf("%d ", n);
    getPares(n - 1);
}

//Soma de todos os valores impares ate dado número
int somaImpares (int n)
{
  if (n == 0) return 0;
  if (n == 1) return 1;
  if (n % 2 != 0) return n + somaImpares(n - 1);
  return somaImpares(n - 1);
}

//Quantidade de vezes que uma letra k aparece em uma string.
int letterCalc(char str[], char letra, int len)
{
  len--;
  if (len == 0 && str[len] == letra) return 1;
  if (len == 0 && str[len] != letra) return 0;
  if (str[len] == letra ) return 1 + letterCalc(str, letra, len);
  else return 0 + letterCalc(str, letra, len);
}

//Soma dos elementos do triangulo superior de uma matriz m
int trisup(int tamanho,int m[][tamanho],int l,int c){
    if(l >= tamanho-1 && c >= tamanho-1) return 0;
    if(c == tamanho-1) return m[l][c] + trisup(tamanho,m,l+1,0);
    if(l >= c) return trisup(tamanho,m,l,c+1);
    else return m[l][c] + trisup(tamanho,m,l,c+1);
}

//Retorna o índice onde está armazenado um inteiro k em um dado vetor
int retInd(int vet[], int tam, int i, int k)
{
  if (i > tam - 1) return -1;
  if (vet[i] == k) return i;
  return retInd(vet, tam, i+1, k);
}
