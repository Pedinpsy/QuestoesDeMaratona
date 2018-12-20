#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,v1,v2,v3;
	scanf("%d",&v1);
	for(i= 0 ; i < v1;i++){
		scanf("%d",&v2);
		scanf("%d",&v3);
		if(v3 == 0) printf("divisao impossivel\n"); else printf("%.1f\n",((float)v2/(float)v3));

	}
	
return 0;

}