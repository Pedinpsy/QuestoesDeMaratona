#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mdc(int a, int b){
	int resto;
	int maior,menor;
	if(a>b){
		maior = a;
		menor = b;
	}else {
		maior = b;
		menor = a;
	}
	resto=maior%menor;
	while(resto!=0){
		maior = menor;
		menor = resto;
		resto=maior%menor;
	}
	return menor;
	
}
int main() {
	int i,v1,v2,v3;
	scanf("%d",&v1);
	for(i= 0 ; i < v1;i++){
	scanf("%d",&v2);
	scanf("%d",&v3);
	printf("%d\n",mdc(v2,v3));
	}
	
return 0;

}