#include <stdio.h>
 
void matriz_transposta (int l, int c, int matriz[l][c]) {
  int i, j, aux;
 
  for (i = 0; i < l; i++) {
    for (j = i+1; j < c; j++) {
      if (j != i) {
   aux = matriz[i][j];
   matriz[i][j] = matriz[j][i];
   matriz[j][i] = aux;
      }
    }
  }
 
  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf ("%d ",matriz[i][j]);
    }
    printf ("\n");
  }
 
}

void main () {
  int i, j;
 
  int matriz[3][3];
 
  for (i = 0; i < 3; i++) {
    for (j= 0; j < 3; j++) {
      scanf ("%d",&matriz[i][j]);
    }
  }
  printf ("\n");
  matriz_transposta (3, 3, matriz);
}
