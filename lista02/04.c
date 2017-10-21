#include <stdio.h>
#include<math.h>

float calcula(int n, float a, float b)
{
	switch(n){
		case 1:
		printf("%.2f", a+b);
		break;

		case 2:
		printf("%.2f", a-b);
		break;

		case 3:
		printf("%.2f", a*b);
		break;

		case 4:
		printf("%.2f", a/b);
		break;

		case 5:
		printf("%.2f", pow(a,b));
		break;
					
	}

}

int main(){
	int n;
	float a,b;

	scanf("%d",&n);
	scanf("%f",&a);
	scanf("%f",&b);

	calcula(n,a,b);
}
