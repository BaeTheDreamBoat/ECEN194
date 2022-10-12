#include <stdlib.h>
#include <math.h>

#include "colorUtils.h"

int max(int a, int b, int c) {
  return (a > b) ? (a > c ? a : c) : (b > c ? b: c);
}

int min(int a, int b, int c) {
  return (a < b) ? (a < c ? a : c) : (b < c ? b : c);
}

int toGrayScale(int *r, int *g, int *b, Mode mode) {
  int red = *r;
  int green = *g;
  int blue = *b;
  *r = (double)(red+green+blue)/3;
  *g = (double)(red+green+blue)/3;
  *b = (double)(red+green+blue)/3;
  return 0;
}

int toSepia(int *r, int *g, int *b) {
  int red = *r;
  int green = *g;
  int blue = *b;
  *r = (0.393*red)+(0.769*green)+(0.189*blue);
  *g = (0.349*red)+(0.686*green)+(0.168*blue);
  *b = (0.272*red)+(0.534*green)+(0.131*blue);
  return 0;
}
