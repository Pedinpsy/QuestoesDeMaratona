#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	double v1,v2,v3,v4;
	scanf("%lf",&v1);
	scanf("%lf",&v2);

	scanf("%lf",&v3);
	scanf("%lf",&v4);

	printf("%.4lf\n",sqrt(pow(v3-v1,2)+pow(v4-v2,2)));
return 0;

}