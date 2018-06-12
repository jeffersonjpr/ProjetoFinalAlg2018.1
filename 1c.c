#include <stdio.h>

//Função abaixo!
int fat(int n)
{
  if (n <= 1) return 1;
  return n * fat(n - 1);
}

//Não copie à partir deste ponto!


int main(int argc, char const *argv[]) {
  int d;
  scanf("%d", &d);
  printf("%d\n", fat(d));
  return 0;
}
