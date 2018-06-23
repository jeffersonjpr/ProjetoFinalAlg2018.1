#include <stdio.h>
#include <stdlib.h>

void na() {
	printf("N\n");
	exit(0);
}
void si() {
	printf("S\n");
	exit(0);
}

int parte(int n,int nv[],int m,int mv[]){  //verifica ate onde é igual e depois soma
	int regra = 1,ct =1,cta = 0,x;
	if(m > n) return 0;
	for(int i = 0;i < n;i++){ //pega ate onde tem diferença
		if(nv[i] != mv[i]) break;
		else cta++;
	}
	x = cta+((n-cta)/2);
	for(int i = 0;i < x;i++){
		if(regra){
			if(nv[i] != mv[i]){
			regra = 0;
			i--; //volta um passo
			}
		}
		else{
			nv[i] += nv[n - ct]; //pega o ultimo e soma com o atual
			ct++;
		}
	}
	regra = 1;

	for(int i = 0;i<m;i++){
		if(nv[i] != mv[i]){//ve se estao todos iguais no tamnho de m
			return parte(x,nv,m,mv);
		}
	}

	return 1;
}

int jack(int n,int nv[],int m,int mv[]){ //caso especial
	int ct,regra = 1;
	if(m > n) return 0;
	if(n % 2 != 0){
		nv[n-2] += nv[n-1];
		return jack(n-1,nv,m,mv);
	}
	for(int i = 0;i<m;i++){
		if(nv[i] != mv[i]){
			regra = 0;
			break;
		}
	}
	if (regra) return 1;


	ct = n - m;
	regra = 1;
	for(int i = 0;i<m;i++){
		nv[ct-regra] += nv[ct+regra-1];
		regra++;
	}

	return jack(ct,nv,m,mv);
}
void inverte (int n,int nv[],int nviv[]){
	for(int i = 0;i < n;i++){ //inverte a ordem do primeiro vetor
		nv[i] = nviv[n - i - 1];
	}
}
int main(){
	//n tamanho do primeiro vetor, m tamanho do segundo vetor
	//nv primeiro vetor, mv segundo vetor
	//nvinv vetor backup
	//teste1 e 2 sao axuliares
	//regra chave universal
	int n,m,nv[15],mv[15],nvinv[15],teste1 = 0,teste2 = 0,regra = 1;
	scanf(" %i",&n);
	for(int i = 0;i<n;i++){
		scanf(" %i",&nv[i]);
		teste1+=nv[i];
		nvinv[i] = nv[i];
	}
	scanf(" %i",&m);
	for(int i = 0;i<m;i++){
		scanf(" %i",&mv[i]);
		teste2+=mv[i];
	}

	//se a soma de todos os elementos forem diferentes, nao ha solução
	// se a segunda fita for maior que a primeira nao ha soluçao
	if(teste1 != teste2 || n < m) na();

	//se o segundo vetor possuir apenas uma variavel, e o somatorio de todos os elementos de ambos os vetores forem iguals, ha solução;
	if(m == 1) si();

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

	//Começo semelhante
	//parte n nv m mv
	if(parte(n,nv,m,mv)) si();


	else{

		inverte(n,nv,nvinv);

		if(parte(n,nv,m,mv)) si();
		else {
			//caso especial

			for(int i = 0;i < n;i++){ //acerta o vetor
				nv[i] = nvinv[i];
			}
			if(jack(n,nv,m,mv)) si();
			else{

				inverte(n,nv,nvinv);

				if(jack(n,nv,m,mv)) si();
				else na();

			}

		}
	}



}
