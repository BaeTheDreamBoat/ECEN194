#include <stdlib.h>
#include <math.h>

double rgbIntToFloat(int c) {
  return (c / 255.0);
}

int checkInt(double d) {
  int f = round(d) > 255 ? 255 : round(d);
  return f;
}

int max(int x, int y, int z) {
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}

int min(int x, int y, int z) {
  int m = x < y ? x : y;
  m = m < z ? m : z;
  return m;
}

int toGrayScaleAverage(int r, int g, int b) {
  return checkInt((double)(r + g + b) / 3);
}

int toGrayScaleLightness(int r, int g, int b) {
  return checkInt((max(r,g,b)+min(r,g,b))/2);
}

int toGrayScaleLuminosity(int r, int g, int b) {
  return checkInt((0.21)*r+(0.72)*g+(0.07)*b);
}

int toSepiaRed(int r, int g, int b) {
  return checkInt((0.393)*r+(0.769)*g+(0.189)*b);
}

int toSepiaGreen(int r, int g, int b) {
  return checkInt((0.349)*r+(0.686)*g+(0.168)*b);
}

int toSepiaBlue(int r, int g, int b) {
  return checkInt((0.272)*r+(0.534)*g+(0.131)*b);
}