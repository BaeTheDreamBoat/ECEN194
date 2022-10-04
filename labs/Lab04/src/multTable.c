/**
 * Ryan Brown
 * 9/12/22
 *
 * This program generates a multiplication table
 * of the size given as a command line argument.
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  if(argc != 2) {
    printf("Error: provide an integer\n");
    exit(1);
  }

  int n = atoi(argv[1]);
  if(n <= 0) {
    printf("empty table!\n");
    exit(0);
  }

  //TODO: place your code here
  for (int i=0; i<=n; ++i) {
    for (int j=0; j<=n; ++j) {
      if ((i==0)&&(j==0)) {
        printf("---   ");
      }
      else if ((i==0)) {
        printf("%3.0f   ", (double)j);
      }
      else if ((j==0)) {
        printf("%3.0f   ", (double)i);
      }
      else {
        printf("%3.0f   ", (double)i*j);
      }
    }
    printf("\n");
  }

  return 0;
}