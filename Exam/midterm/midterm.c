/**
 * Ryan Brown
 * 10/20/22
 * 
 * code for midterm exam
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "midterm.h"

int getCornStats(double radius, double height, double *volume, double *weight) {
  if (volume==NULL||weight==NULL){
    return 1;
  }
  else if (radius<=0||height<=0) {
    return 1;
  }
  *volume = pow(radius,2)*height*M_PI;
  *weight = *volume*720.83;
  return 0;
}

int fizzBuzzSum(const int *arr, int n, int *huskerTotal, int *mavTotal) {
  if (arr==NULL||huskerTotal==NULL||mavTotal==NULL) {
    return 1;
  }
  else if (n<=0){
    return 2;
  }
  *huskerTotal=0;
  *mavTotal=0;
  for (int i=0; i<n; ++i){
    if (arr[i]%3==0){
      *huskerTotal+=arr[i];
    }
    if (arr[i]%5==0){
      *mavTotal+=arr[i];
    }
  }
  return 0;
}

int *merge(const int *a, int n, const int *b, int m) {
  if (a==NULL||b==NULL) {
    return 0;
  }
  else if(n<=0||m<=0){
    return 0;
  }
  int *arr=malloc(sizeof(int)*(n+m));
  for (int i=0; i<n; ++i){
    arr[i]=a[i];
  }
  int j=0;
  for (int i=n; i<n+m; ++i){
    arr[i]=b[j];
    ++j;
  }
  return arr;
}

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
