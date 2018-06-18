/*
Dada uma string, imprimir na tela o número de vezes que uma letra LETRA
aparece na string dada. A letra deverá ser informada pelo usuário.
*/
#include <stdio.h>
#include <string.h>

//funçao abaixo nao copie acima
int letterCalc(char str[], char letra, int len)
{
  len--;
  if (len == 0 && str[len] == letra) return 1;
  if (len == 0 && str[len] != letra) return 0;
  if (str[len] == letra ) return 1 + letterCalc(str, letra, len);
  else return 0 + letterCalc(str, letra, len);
}
//funçao acima nao copie abaixo

int main(){ //casos testes
	printf("%i\n",letterCalc("caa", 'a', 3));                //Funcionou
	printf("%i\n",letterCalc("abcdebfgop", 'b', 10));        //Funcionou
  printf("%i\n",letterCalc("Meu nome e caio.", 'e', 16));  //Funcionou
	printf("%i\n",letterCalc("batata", 'e', 6));             //Funcionou
	printf("%i\n",letterCalc("bar", 'f', 3));                //Funcionou
  printf("%i\n",letterCalc("foo", 'o', 3));                //Funcionou
	printf("%i\n",letterCalc("barfoo", 'o', 6));             //Funcionou
}
