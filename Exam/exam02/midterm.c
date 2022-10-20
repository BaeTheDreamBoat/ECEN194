
int getCornStats(double radius, double height, double *volume, double *weight) {
  //TODO: implement
}

int fizzBuzzSum(const int *arr, int n, int *huskerTotal, int *mavTotal) {
  //TODO: implement
}

int *merge(const int *a, int n, const int *b, int m) {
  //TODO: implement
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
