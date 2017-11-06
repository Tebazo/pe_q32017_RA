#include<stdio.h>
#include<stdlib.h>
 
void soma(int *x, int *y, int *z)
{
  for(int i=0;i<5;i++) {
		printf("%d ", *(z+i) = *(x+i) + *(y+i));
	}
}
 
int main() {
 
  int v1[5],v2[5],v3[5];
 
  for(int i=0;i<5;i++)
    scanf("%d",&v1[i]);
   
  for(int i=0;i<5;i++)
    scanf("%d",&v2[i]);

  soma(v1,v2,v3);
}
