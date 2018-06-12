#include <stdio.h>

//funçao abaixo nao copie acima
int mult (int a, int b)
{
  if(b == 1) return a;
  else if(b == 0) return 0;
  return a + mult(a, b - 1);
}
//funçao acima nao copie abaixo

int main(){ //casos testes
	printf("%i\n",mult(1,2)); // funcionou
	printf("%i\n",mult(0,1)); // funcionou
	printf("%i\n",mult(2,5)); // funcionou
	printf("%i\n",mult(0,0)); // funcionou
	printf("%i\n",mult(1,1)); // funcionou
	printf("%i\n",mult(100,1000)); // funcionou
}
