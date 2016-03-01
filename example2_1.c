#include "librerias.h"

//Intercambia valores. Esta funcion intercambia
//el valor de dos variables double usando
//paso de parametro.
//
//\param a primer numero a intercambiar
//\param b segundo numero a intercambiar
//\note funcion pura
void swap(double *a, double *b) {
  double t;
  t = *a;
  *a = *b;
  *b = t;
}

int main(int argc, char* argv[]) {
  double x = 3;
  double y = 4;
  printf("X:%lf\n", x);
  printf("Y:%lf\n", y);
  swap(&x, &y);
  printf("X:%lf\n", x);
  printf("Y:%lf", y);
  return 0;
}
