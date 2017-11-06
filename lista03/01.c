#include<stdio.h>
#include<stdlib.h>
 
 
int vogal(char *x)
{
  int cont = 0;
  char vogal[5] = {'a','e','i','o','u'};
 
  while(*x) {
    for(int i=0;i<5;i++){
      if(*x == vogal[i]) cont++;
    } 
    x++;
  }
  return cont;
}
 
 
int main() {
  char  entrada [255];
  fgets (entrada,255,stdin);
  printf("%d\n",vogal(entrada));
  return 0;
}
 
