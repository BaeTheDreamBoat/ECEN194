/**
 * A collection of array and 2-D array utility
 * functions.
 */

/**
 * Prints the given integer array to the standard output
 */
void printArray(const int *arr, int n);

/**
 * Prints the given (n x m) integer table to the standard
 * output.
 */
void printTable(int **table, int n, int m);

/**
 * Generates an array of integers of the given size filled
 * with random integer values between 0 and 100 (exclusive).
 * This function assumes that the random number
 * generator has already been seeded.
 */
int * generateRandomArray(int size);

/**
 * Sums the elements in the given array.
 */
int getSum(const int *arr, int size);

/**
 * Frees the given (n x m) table
 */
void freeTable(int **table, int n, int m);

/**
 * computes teh average of elements in arr
 */
double getMean(const int *arr, int size);

/**
 * returns the minimum element in arr
 */
int getMin(const int *arr, int size);

/**
 * returns the index of the minimum element in arr
 */
int getIndexOfMin(const int *arr, int size);

/**
 * returns the maximum element in arr
 */
int getMax(const int *arr, int size);

/**
 * returns the index of the maximum element
 */
int getIndexOfMax(const int *arr, int size);

/**
 * returns the number of elements in arr that are greater than or equal to threshold and returns
 * an array only composed of elements in arr that are greater than or equal to threshold
 */
int * filterThreshold(const int *arr, int size, int threshold, int *resultSize);

/**
 * creates and returns a new (n x m) 2-D array that contains the values in a multiplication table
 */
int **createMultiplicationTable(int n, int m);
