#include <stdio.h>

//funçao abaixo nao copie acima
int trisup(int tamanho,int m[][tamanho],int l,int c){
    if(l >= tamanho-1 && c >= tamanho-1) return 0;
    if(c == tamanho-1) return m[l][c] + trisup(tamanho,m,l+1,0);
    if(l >= c) return trisup(tamanho,m,l,c+1);
    else return m[l][c] + trisup(tamanho,m,l,c+1);
}
//funçao acima nao copie abaixo

int main(){ //casos testes
    int n[3][3] = {0,1,2,0,1,2,0,1,2},m[5][5];
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%d ",n[i][j]);
        }
        printf("\n");
    }
	printf("Soma do triangulo superior = %i\n",trisup(3,n,0,0)); //
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5;j++){
            m[i][j] = i+j;
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("Soma do triangulo superior = %i\n",trisup(5,m,0,0)); //
}
