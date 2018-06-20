#include <stdio.h>
#include <stdlib.h>

void na() {printf("N\n");}
void si() {printf("S\n");}
int main(){
	int n,m,nv[15],mv[15],teste1 = 0,teste2 = 0,regra = 1;
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
	//se o segundo vetor possuir apenas uma variavel, e o somatorio de todos os elementos de ambos os vetores forem iguals, ha solução;
	if(m == 1 && teste1 == teste2){
		si();
		return 0;
	}
	//vetor tamanhos iguals
	if(m == n){
		for(int i =0;i<n;i++){
			if(regra){
				if(mv[i] != nv[i]) regra = 0;
			}
			else break;
		}
		if(regra) si();
		else{
			regra = 1;
			teste1 = m;
			for(int i =0; i<n;i++){
				if(regra){
					//checa o vetor inverso
					if(nv[i] != mv[teste1 -(i+1)]) regra = 0;
				}
				else break;
			}
			if(regra) si();
			else na(); //se os vetores tem o mesmo tamanho e nao cairam nos casos anteriores, nao ha solução
		}
	}
	//ate aqui funciona



}
