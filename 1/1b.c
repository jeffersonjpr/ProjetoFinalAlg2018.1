#include <stdio.h>


///funçao abaixo nao copie acima
int pot(int a,int b){ //a elevado a b
	if(b <= 0) return 1;
	return a*pot(a,b-1);
}
///funçao acima nao copie abaixo

int main(){ //casos testes
	printf("%i\n",pot(2,5)); // funcionou
	printf("%i\n",pot(1,2)); // funcionou
	printf("%i\n",pot(3,0)); // funcionou
	printf("%i\n",pot(5,1)); // funcionou
	printf("%i\n",pot(5,2)); // funcionou
	printf("%i\n",pot(0,1)); // funcionou
	printf("%i\n",pot(0,0)); // funcionou
}
