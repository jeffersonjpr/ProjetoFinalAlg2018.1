#include <stdio.h>

//funçao abaixo nao copie acima
int somaImpares (int n)
{
  if(n == 1)
    return 1;
  else if (n % 2 != 0)
    return n + somaImpares(n - 1);
  else
    return somaImpares(n - 1);
}
//funçao acima nao copie abaixo

int main(){ //casos testes
  printf("%i\n", somaImpares(5));     //funcionou
  printf("%i\n", somaImpares(1));     //funcionou
  printf("%i\n", somaImpares(15));    //funcionou
  printf("%i\n", somaImpares(10));    //funcionou
  printf("%i\n", somaImpares(7));     //funcionou
  printf("%i\n", somaImpares(99));    //funcionou
}
