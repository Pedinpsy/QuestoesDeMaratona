	#include <stdio.h>
	#include <stdlib.h>

	int main() {
		int v1,i,j = 1;
		scanf("%d",&v1);
		for(i = 0 ; i < v1;i++){
			printf("%d %d %d PUM\n",j,j+1,j+2);
			j += 4;
		}
		
	return 0;

	}