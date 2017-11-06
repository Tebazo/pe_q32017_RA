#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
/*void inverte2 (char *x) {
  int n = strlen(x);
	char *y;
 
  for(int i=0;i<n-1;i++) {
    *(y+i) = *(x+n-1-i);
  }
  *(y+n) = *(x+n);
  printf("%s\n",y);
}


void inverte(char *x) {
	int n = strlen(x);
	char *y;
	for(int i=0;i<n;i++) {
		*(y+n-1-i) = *(x+i);
		//if(n == (n-i)/2) break;	
	}
  (y+n+1)='\0';
	for(int i=0;i<n+1;i++)
		printf("%c\n", y[i]);
	printf("%s\n",y);
}
*/

void inverte1 (char *x) {
	char tmp;
	int n = strlen(x)-1;
  int k=n;
  for(int i=0;i<n;i++){
     tmp=x[n];
     x[n]=x[i];
     x[i]=tmp;
     n--;
     if (n==(k/2)) break; 
  }
	
	printf("%s\n",x);
} 
 
void main() {
  char  entrada [255];
  fgets (entrada,255,stdin);
  inverte1(entrada);
}
