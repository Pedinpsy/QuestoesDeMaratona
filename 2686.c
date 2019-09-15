#include <stdio.h>

int main(){
	float grau;
	int x;
	int hora, minut, segundo ;
	scanf("%f",&grau);
	if(grau == 360) grau = 0;
	if(grau>=0  && grau< 90 ){
		printf("Bom Dia !!\n");
	}else if(grau>=90 && grau< 180 ){
		printf("Boa Tarde !!\n");
	}else if(grau>=180 && grau< 270 ){
		printf("Boa Noite !!\n");
	}
	else if(grau>=270 && grau< 360 ){
		printf("Boa Madrugada !!\n");
	}

	x = (44520*grau)/95.5;
	printf("%d\n",x);
	hora = x/3600;
	minut = (x%3600)/60;
	segundo = (x%3600)%60;
	printf("%d:%02d:%d\n",hora,minut,segundo);
}