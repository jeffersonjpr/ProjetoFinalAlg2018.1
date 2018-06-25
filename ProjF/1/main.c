#include <stdio.h>
#include "recursividade.h"


int main(){
    int n[3][3] = {11,21,11,25,22,10,40,31,33},m[5][5];
    printf("\nMultiplicacao: \n");
    printf("   99 * 100 = %i\n",mult(99,100));
	printf("   0 * 1 = %i\n",mult(0,1));
	printf("   21 * 2 = %i\n",mult(21,2));
	printf("   0 * 0 = %i\n",mult(0,0));
	printf("   1 * 1 = %i\n",mult(1,1));
	printf("   100 * 1000 = %i\n",mult(100,1000));
    printf("\nPotencia:\n");
    printf("   2 ^ 5 = %i\n",pot(2,5));
	printf("   10 ^ 2 = %i\n",pot(10,2));
	printf("   3 ^ 0 = %i\n",pot(3,0));
	printf("   5 ^ 1 = %i\n",pot(5,1));
	printf("   42 ^ 2 = %i\n",pot(42,2));
    printf("\nFatorial:\n");
    printf("   0! = %i\n",fat(0));
	printf("   1! = %i\n",fat(1));
	printf("   4! = %i\n",fat(4));
	printf("   2! = %i\n",fat(2));
    printf("\nn-esimo numero de Fibonacci:\n");
    printf("   Posicao 42 na sequencia de Fibonacci: %i\n",fib(42));
	printf("   Posicao 1 na sequencia de Fibonacci: %i\n",fib(1));
	printf("   Posicao 2 na sequencia de Fibonacci: %i\n",fib(2));
	printf("   Posicao 10 na sequencia de Fibonacci: %i\n",fib(10));
    printf("\nNumeros pares que incidem no intervalo [n,0]:\n");
    printf("   n=5:");
    getPares(5);
    printf("   n=10:");
    getPares(10);
    printf("   n=4:");
    getPares(4);
    printf("\nSoma dos numeros impares no intervalo [n,0]:\n");
    printf("   n=5:%i\n", somaImpares(5));
    printf("   n=2:%i\n", somaImpares(2));
    printf("   n=10:%i\n", somaImpares(10));
    printf("   n=42:%i\n", somaImpares(42));
    printf("\nNumero de vezes que uma letra aparece em uma string:\n");
    printf("   String:caa              Letra:a    numero de vezes:%i\n",letterCalc("caa", 'a', 3));
    printf("   String:12pi34pi56pi78pi Letra:i    numero de vezes:%i\n",letterCalc("12pi34pi56pi78pi", 'i', 16));
    printf("   String:Meu nome e caio. Letra:e    numero de vezes:%i\n",letterCalc("Meu nome e caio.", 'e', 16));
    printf("   String:quarenta e dois  Letra:x    numero de vezes:%i\n",letterCalc("quarenta e dois", 'x', 15));
    printf("\nSoma do triangulo superior de uma matriz:\n");
    for(int i = 0;i<3;i++){
        printf("   ");
        for(int j = 0;j<3;j++){
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
	printf("   Soma do triangulo superior = %i\n",trisup(3,n,0,0));
    for(int i = 0;i<5;i++){
        printf("   ");
        for(int j = 0;j<5;j++){
            m[i][j] = i+j+1;
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("   Soma do triangulo superior = %i\n",trisup(5,m,0,0));
    printf("\nIndices:\n");
    int na[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("   Vetor:{1,2,3,4,5,6,7,8,9,10} n:5  indice:%d\n", retInd(na, 10, 0, 5));
    int ma[4] = {51,51,471,58892};
    printf("   Vetor:{51,51,471,58892}      n:42 indice:%d\n", retInd(ma, 4, 0, 42));

}
