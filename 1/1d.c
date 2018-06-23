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

/*
	1 - 3 ---> 1
	4 ---> 2   | fib(2)+fib(3) ---> 1+1
	5 ---> 3   | fib(4)+fib(3) ---> 2+1
	6 ---> 5   | fib(5)+fib(4) ---> 3+2
	7 ---> 8   | fib(6)+fib(5)
	8 ---> 13  | fib(7)+fib(6)
	9 ---> 24	 | fib(8)+fib(7)
	n ---> fib(n)


*/
