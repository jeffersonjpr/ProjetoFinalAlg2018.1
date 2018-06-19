#include <stdio.h>
#include <stdlib.h>

void na() {printf("N\n");}
void si() {printf("S\n");}
int main(){
	int n,m,nv[15],mv[15],teste1 = 0,teste2 = 0;
	scanf(" %i",&n);
	for(int i = 0;i<n;i++){
		scanf(" %i",&nv[i]);
		teste1+=nv[i];
	}
	scanf(" %i",&m);
	for(int i = 0;i<m;i++){
		scanf(" %i",&mv[i]);
		teste2+=mv[i];
	}

	//se a soma de todos os elementos forem diferentes, nao ha solução
	// se a segunda fita for maior que a primeira nao ha soluçao
	if(teste1 != teste2 || n < m) {
		na();
		return 0;
	}


}
