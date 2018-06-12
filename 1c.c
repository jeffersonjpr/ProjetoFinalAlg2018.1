#include <stdio.h>

//funçao abaixo nao copie acima
int fat(int n)
{
  if (n <= 1) return 1;
  return n * fat(n - 1);
}
//funçao acima nao copie abaixo

int main(){ //casos testes
	printf("%i\n",fat(2)); // funcionou
	printf("%i\n",fat(1)); // funcionou
	printf("%i\n",fat(3)); // funcionou
	printf("%i\n",fat(4)); // funcionou
	printf("%i\n",fat(5)); // funcionou
	printf("%i\n",fat(6)); // funcionou
}
