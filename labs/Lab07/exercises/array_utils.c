#include <stdlib.h>
#include <stdio.h>

#include "array_utils.h"

void printArray(const int *arr, int n) {
  if(arr == NULL) {
    printf("[null]\n");
    return;
  }
  printf("[ ");
  for(int i=0; i<n-1; i++) {
    printf("%d, ", arr[i]);
  }
  printf("%d ]\n", arr[n-1]);
  return;
}

void printTable(int **table, int n, int m) {
  if(table == NULL) {
    printf("[null]\n");
    return;
  }
  for(int i=0; i<n; i++) {
    printArray(table[i], m);
  }
  return;
}

int * generateRandomArray(int size) {
  if(size < 0) {
    return NULL;
  }
  int *randomArr = (int *) malloc(sizeof(int)*size);
  //int randomArr[size];
  for(int i=0; i<size; i++) {
    randomArr[i] = rand() % 100;
  }
  return randomArr;
}

int getSum(const int *arr, int size) {
  if(arr == NULL) {
    return 0;
  }
  int total = 0;
  for(int i=0; i<size; i++) {
    total += arr[i];
    //arr[i] = 0;
  }
  return total;
}

void freeTable(int **table, int n, int m) {
  if(table == NULL) {
    return;
  }
  for(int i=0; i<n; i++) {
    free(table[i]);
  }
  free(table);
}

double getMean(const int *arr, int size) {
  if(arr == NULL) {
    return 0;
  }
  int sum = 0;
  for (int i=0; i<size; ++i) {
    sum += arr[i];
  }
  return sum/size;
}

int getMin(const int *arr, int size) {
  if(arr == NULL) {
    return 0;
  }
  int min = arr[0];
  for (int i=0; i<size; ++i){
    if (arr[i]<min){
      min = arr[i];
    }
  }
  return min;
}

int getIndexOfMin(const int *arr, int size) {
  if(arr == NULL) {
    return 0;
  }
  int min = arr[0];
  int index = 0;
  for (int i=0; i<size; ++i){
    if (arr[i]<min){
      min = arr[i];
      index = i;
    }
  }
  return index;
}

int getMax(const int *arr, int size) {
  if(arr == NULL) {
    return 0;
  }
  int max = arr[0];
  for (int i=0; i<size; ++i){
    if (arr[i]>max){
      max = arr[i];
    }
  }
  return max;
}

int getIndexOfMax(const int *arr, int size) {
  if(arr == NULL) {
    return 0;
  }
  int max = arr[0];
  int index = 0;
  for (int i=0; i<size; ++i){
    if (arr[i]>max){
      max = arr[i];
      index = i;
    }
  }
  return index;
}

int * filterThreshold(const int *arr, int size, int threshold, int *resultSize) {
  if(arr == NULL) {
    return 0;
  }
  int result = 0;
  for (int i=0; i<size; ++i) {
    if (arr[i]>=threshold) {
        resultSize[result] = arr[i];
        ++result;
    }
  }
  return resultSize;
}

int **createMultiplicationTable(int n, int m) {
  int **table = (int **) malloc(sizeof(int *)*n);
  for (int i=0; i<n; ++i) {
    table[i] = (int *) malloc(sizeof(int) * m);
  }
  for (int y=0; y<n; ++y) {
    for (int x=0; x<m; ++x) {
      table[y][x] = (y+1)*(x+1);
    }
  }
  return table;
}
