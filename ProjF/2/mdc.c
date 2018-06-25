#include <stdio.h>
#include <stdlib.h>

int mdc(int x,int y){
	if(x > y) return mdc(x-y,y);
	if(x != y) return mdc(y,x);
	return x;
}
int main(){
	int x,y;
	for(int i = 0;i<15;i++){
		x = rand() % 100;
		y = rand() % 100;
		printf("mdc de %d e %d é %d.\n",x,y,mdc(x,y));
	}
}
