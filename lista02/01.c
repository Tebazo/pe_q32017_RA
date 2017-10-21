#include <stdio.h>
#include <math.h>

int main(){

	int a;
	printf("Digite o número desejado: ");
	scanf("%d", &a);
	parimpar(a);
}


parimpar(int x)
{
	if(x%2 == 0){
		printf("O número digitado é par\n");	
	} else printf("O número digitado é ímpar\n");

}
