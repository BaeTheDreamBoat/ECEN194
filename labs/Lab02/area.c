/**
 * Author: Chris Bourke
 *
 * This program prompts the user to enter the
 * base and the height of a triangle and computes
 * its area using the well-known formula
 *  1/2 * base * height
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  if(argc != 3) {
    printf("ERROR: invalid number of command line inputs\n");
    printf("       Usage: area BASE HEIGHT\n");
    exit(1);
  }

  double base = atoi(argv[1]);
  double height = atoi(argv[2]);
  double area;

  area = (double)1/2 * base * height;

  printf("The area is %f square units.\n", area);

  return 0;
}
