#include <stdio.h>
#include<math.h>

int calcfatorial(int x)
{
	int res=1;

	while(x){
		res = res*x;
		x--;
	}
	return res;
}

int coefbinomial(int x, int y, int z)
{
	int res=0;
	res = x/(y*z);
	printf("%d\n",res);
}

int main(){
	int a,b,x,y,z;
	scanf("%d""%d",&a,&b);
	//scanf("%d",&b);

	x = calcfatorial(a);
	y = calcfatorial(b);
	z = calcfatorial(a-b);
	coefbinomial(x,y,z);

}
