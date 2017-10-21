#include <stdio.h>
#include<math.h>

double delta(double a, double b, double c)
{
	double d;
	d = pow(b,2)-(4*a*c);		
	return d;
}


double raiz1(double b, double delta, double a)
{	
	double x = (-b-sqrt(delta))/2*a;
	printf("%.2f",x);
}

double raiz2(double b, double delta, double a)
{	
	double x = (-b+sqrt(delta))/2*a;
	printf("%.2f",x);
}

int main(){
	double a,b,c;

	scanf("%lf""%lf""%lf",&a,&b,&c);

	raiz1(b,delta(a,b,c),a);
	raiz2(b,delta(a,b,c),a);
	
}
