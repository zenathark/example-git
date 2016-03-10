#include "librerias.h"

int kSize = 8;

void imprimeArreglo(int* arreglo, int size) {
  for(int i=0; i<size; ++i) {
	printf("%d ", arreglo[i]);
  }
  printf("\n");
}

void recorreElementos(int* arreglo, int desde, int hasta) {
  for(int i=desde; i<hasta; ++i) {
	arreglo[i] = arreglo[i+1];
  }
}

void quicksortLomuto(int* arreglo, int size, int desde, int hasta) {
  if (desde == hasta)
	return;
  int pivote = hasta;
  int i = desde;
  while(i < pivote) {
	if (arreglo[i] > arreglo[pivote]) {
	  int a = arreglo[i];
	  printf("Cambiando: %d\n", arreglo[i]);
	  recorreElementos(arreglo, i, pivote);
	  arreglo[pivote] = a;
	  --pivote;
	} else {
	  ++i;
	}
  }
  quicksortLomuto(arreglo, kSize, desde, pivote-1);
  quicksortLomuto(arreglo, kSize, pivote, hasta+1);
}

int main(int argc, char* argv[]) {
  int arreglo[] = {21, 3, 7, 1, 9, 6, 5, 3};
  imprimeArreglo(arreglo, kSize);
  quicksortLomuto(arreglo, kSize, 0, kSize-1);
  imprimeArreglo(arreglo, kSize);
  return 0;
}
