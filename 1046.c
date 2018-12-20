#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int a,b,hora;
	scanf("%d",&a);
	scanf("%d",&b);
	if (a == b){
		printf("O JOGO DUROU 24 HORA(S)\n");
		return (0);
	} 
	
	if(a>12 && b < 12){
		hora = (24-a)+b;
		printf("O JOGO DUROU %d HORA(S)\n",hora);
		return (0);
	}
	if(b>12 && a < 12){
		hora = (12-a)+(b-12);
		printf("O JOGO DUROU %d HORA(S)\n",hora);
		return (0);
	}
	if(b>12 && a > 12 || a<12 && b<12){
		hora = b-a;
		printf("O JOGO DUROU %d HORA(S)\n",hora);
		return (0);
	}


	return 0 ;
}