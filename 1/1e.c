#include <stdio.h>

//funçao abaixo nao copie acima
void getPares (int n)
{
  if(n == 0)
    printf("0\n");
  else if (n % 2 == 0)
    printf("%d ", n);
    getPares(n - 1);
}
//funçao acima nao copie abaixo

int main(){ //casos testes
  getPares(5);    //funcionou
  getPares(10);   //funcionou
  getPares(50);   //funcionou
  getPares(3);    //funcionou
  getPares(2);    //funcionou
  getPares(4);    //funcionou
}
