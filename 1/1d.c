#include <stdio.h>

//funçao abaixo nao copie acima
int fib(int n){
	if(n <= 1) return 0;
	else if(n <= 3) return 1;
	return fib(n-1) + fib(n-2);
}
//funçao acima nao copie abaixo

int main(){ //casos testes
	printf("%i\n",fib(258)); // funcionou
	printf("%i\n",fib(1)); // funcionou
	printf("%i\n",fib(2)); // funcionou
	printf("%i\n",fib(3)); // funcionou
	printf("%i\n",fib(10)); // funcionou
	printf("%i\n",fib(11)); // funcionou
}
