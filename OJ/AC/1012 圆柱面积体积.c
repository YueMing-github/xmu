#include <stdio.h>

int main(){
	double r,h;
	scanf("%lf %lf",&r,&h);
//	printf("%f %f\n",r,h);
	const double pi = 3.14;
	double C1,Sa,Sb,Va,Vb;
	C1 = 2 * pi * r + 0.0000001;
	Sa = pi * r * r + 0.0000001;
	Sb = 4 * pi * r * r + 0.0000001;
	Va = 4 * pi * r * r * r / 3 + 0.0000001;
	Vb = Sa * h;
	printf("C1=%.2f\n",C1);
	printf("Sa=%.2f\n",Sa);
	printf("Sb=%.2f\n",Sb);
	printf("Va=%.2f\n",Va);
	printf("Vb=%.2f",Vb);
	return 0;
}
