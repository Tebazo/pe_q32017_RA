#include <stdio.h>
#include<math.h>

float calculapi(int x)
{
	float a = 1, b = 1/sqrt(2), t = 1/4.0, p = 1, a1, r;
	
	while(x > 0) {
		a1 = (a+b)/2;
		b = sqrt(a*b);
		t = t-(p * pow((a-a1),2));
		p = 2*p;
		a = a1;
		x--;
	}

	return pow((a+b),2)/(4*t);
}

int main(){

	printf("%.20f", calculapi(10));

}
