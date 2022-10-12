#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "array_utils.h"

int main(int argc, char **argv) {

  //seed the random number generator with the current time
  srand(time(NULL));

  int n = 10;
  int *arr = generateRandomArray(n);
  printArray(arr, n);

  int sum = getSum(arr, n);
  printf("sum of elements = %d\n", sum);
  printArray(arr, n);

  //testing user made functions
  int average = getMean(arr, n);
  printf("Average of elements = %d\n", average);

  int min = getMin(arr, n);
  printf("Minimim element is = %d\n", min);

  int index = getIndexOfMin(arr, n);
  printf("Index om minimum element is = %d\n", index);

  int max = getMax(arr, n);
  printf("Maximum element is = %d\n", max);

  index = getIndexOfMax(arr, n);
  printf("Index om Maximum element is = %d\n", index);

  int *resultSize = 0;
  int threshold = 10;
  int *resultArray = filterThreshold(arr, n, threshold, resultSize);
  printf("Result Size = %d\n", *resultSize);

/**
  int m = 10;
  int **table = createMultiplicationTable(n, m);
  printTable(table, n, m);

  for(int i=0; i<n; i++) {
  free(table[i]);
  }
  free(table);
**/

  free(arr);

  free(resultArray);

  return 0;
}
