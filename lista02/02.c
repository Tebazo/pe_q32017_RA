#include <stdio.h>
#include<math.h>

double volume(double x, double y, double z)
{	
	return (x*y*z);
}

int main(){

	double a,b,c,d;
	printf("Qual a largura do objeto ");
	scanf("%lf", &a);

	printf("Qual a comprimento do objeto ");
	scanf("%lf", &b);

	printf("Qual a altura do objeto ");
	scanf("%lf", &c);

	printf("O volume é: %.2f\n", volume(a,b,c));
}

