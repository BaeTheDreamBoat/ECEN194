
#ifndef MODE_H
#define MODE_H

typedef enum {
  AVERAGE,
  LIGHTNESS,
  LUMINOSITY
} Mode;

#endif /* MODE_H */

/**
 * Returns the maximum value among the three given values
 */
int max(int a, int b, int c);

/**
 * Returns the minimum value among the three given values
 */
int min(int a, int b, int c);

/**
 * Returns the average of all RGB color values
 */
int toGrayScale(int *r, int *g, int *b, Mode mode);

/**
 * Returns different values to each of the three RGB components using
 * formulas for each color
 */
int toSepia(int *r, int *g, int *b);
